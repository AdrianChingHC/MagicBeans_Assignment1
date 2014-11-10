class ApplicationController < ActionController::Base
  # Prevent CSRF attacks by raising an exception.
  # For APIs, you may want to use :null_session instead.
  protect_from_forgery with: :exception

before_filter :require_login

include SessionsHelper

# def user_logged_in?
#     if session[:user_id]
#       true
#     else
#       false
#     end
# end

#     def current_user
#       if user_logged_in?
#         User.find(session[:user_id])
#       else
#         nil
#       end
#     end
 
private 

    
    
  def require_login 
     unless current_user 
     redirect_to login_url 
     end 
  end 
    
end
