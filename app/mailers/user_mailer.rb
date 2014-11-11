class UserMailer < ActionMailer::Base
  default from: "noreply@whattimeisit.com"

  def welcome_email(user)
    @user = user
    @url = sign_in_url
    mail(to: @user.email, subject: 'Thank you for registering!')
  end
end
