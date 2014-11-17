class ApplicationController < ActionController::Base
  # Prevent CSRF attacks by raising an exception.
  # For APIs, you may want to use :null_session instead.
  protect_from_forgery with: :exception
  before_filter :require_login
  before_filter :set_user_time_zone

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
  
  def set_user_time_zone
    Time.zone = current_user.time_zone if user_logged_in?
  end
  
  # def give_time

  # @time = Time.now.strftime("%H:%M:%S ")

  # render 'time_portion'

  # end
    
end
