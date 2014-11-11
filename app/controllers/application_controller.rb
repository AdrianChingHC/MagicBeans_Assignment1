class ApplicationController < ActionController::Base
  # Prevent CSRF attacks by raising an exception.
  # For APIs, you may want to use :null_session instead.
  protect_from_forgery with: :exception

  before_filter :require_login

  include SessionsHelper
 
  private 

   def require_login 
       unless current_user 
         flash[:error] = "You must be logged in to access this section"
         redirect_to sign_in_path 
       end 
   end 
   
  def require_admin
        unless current_user.acl == 1 
          flash[:error] = "You must have the required access level to this section"
          redirect_to root_path # halts request cycle
        end
  end
    
end
