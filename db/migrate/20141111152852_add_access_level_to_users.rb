class AddAccessLevelToUsers < ActiveRecord::Migration
  def change
    add_column :users, :acl, :integer
  end
end
