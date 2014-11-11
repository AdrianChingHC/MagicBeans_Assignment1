module SessionsHelper
  def user_logged_in?
    if session[:user_id]
      true
    else
      false
    end
  end

    def current_user
      if user_logged_in?
        User.find(session[:user_id])
      else
        nil
      end
    end
    
    def is_admin?
        if user_logged_in? && current_user.acl == 1
           true
        else
           false
        end
    end
end
