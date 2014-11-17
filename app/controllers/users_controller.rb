class UsersController < ApplicationController
  skip_before_filter :require_login, only: [:new, :create]
  before_action :set_user, only: [:show, :edit, :update, :destroy]
  before_action :require_admin, except: [:show, :new, :create, :edit, :update] # require the user to be admin filter


  # GET /users
  # GET /users.json
  def index
    @users = User.all
  end

  # GET /users/1
  # GET /users/1.json
  def show
    @user = User.find(params[:id])
  end

  # GET /users/new
  def new
    @user = User.new
  end

  # GET /users/1/edit
  def edit
    @user = User.find(params[:id])
  end

  # POST /users
  # POST /users.json
  def create
    @user = User.new(user_params)
    @user.acl = 10;
     #respond_to do |format|
      if @user.save
        UserMailer.welcome_email(@user).deliver
        
        if is_admin?
          redirect_to user_path(id: @user.id), success: 'successfully added user!'
        else
          redirect_to sign_in_path, notice: 'Thank you for signing up.'
        # format.html { redirect_to sign_in_path, notice: 'User was successfully created.' }
        # format.json { render :show, status: :created, location: @user }
        end
      
      else
        render :new
        # format.html { render :new }
        # format.json { render json: @user.errors, status: :unprocessable_entity }
      end
     #end
  end

  # PATCH/PUT /users/1
  # PATCH/PUT /users/1.json
  def update
    if params[:user][:password].blank? && params[:user][:password_confirmation]
      params[:user].delete(:password)
      params[:user].delete(:password_confirmation)
    end
    
    respond_to do |format|
      if @user.update(user_params)
        format.html { redirect_to user_path(id: @user.id), notice: 'User was successfully updated.' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /users/1
  # DELETE /users/1.json
  def destroy
    @user.destroy
    respond_to do |format|
      format.html { redirect_to users_url, notice: 'User was successfully deleted.' }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_user
      @user = User.find(params[:id])
    end

    # Never trust parameters from the scary internet, only allow the white list through.
    def user_params
      params.require(:user).permit(:name, :email, :password, :password_confirmation, :time_zone)
    end
    
  
    
    
end
