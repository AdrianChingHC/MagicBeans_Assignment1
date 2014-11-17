# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the rake db:seed (or created alongside the db with db:setup).
#
# Examples:
#
#   cities = City.create([{ name: 'Chicago' }, { name: 'Copenhagen' }])
#   Mayor.create(name: 'Emanuel', city: cities.first)

user = User.new
user.name = 'admin'
user.email = 'admin@whattimeisit.com'
user.password = 'password'
user.acl = '1'
user.time_zone = '(GMT+08:00) Kuala Lumpur'
user.save!