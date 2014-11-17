class User < ActiveRecord::Base
  validates :name, presence: true
  validates :email, presence: true, format: { with: /\A\S+@\S+\.\S+\z/, message: 'invalid format' }
  validates :acl, presence: true
  validates :time_zone, presence: true

  has_secure_password
end
