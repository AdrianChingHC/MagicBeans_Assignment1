[33mcommit ade99c2a38fff22936cbed3994aed01ddbe40bfb[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Tue Nov 11 16:11:06 2014 +0000

    Modified navbar

 .c9/metadata/workspace/app/views/layouts/application.html.erb | 2 [32m+[m[31m-[m
 app/views/layouts/application.html.erb                        | 2 [32m+[m[31m-[m
 app/views/users/index.html.erb                                | 8 [32m++++[m[31m----[m
 3 files changed, 6 insertions(+), 6 deletions(-)

[33mcommit 7a86f97cf1cb4103f360c0f43f0ca4e233143dc9[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Tue Nov 11 15:55:02 2014 +0000

    Added User Access Level

 .c9/metadata/tab1                                                 |  2 [32m+[m[31m-[m
 .c9/metadata/tab2                                                 |  1 [31m-[m
 .c9/metadata/workspace/app/controllers/sessions_controller.rb     |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/static_pages_controller.rb |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/users_controller.rb        |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/helpers/sessions_helper.rb             |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/mailers/user_mailer.rb                 |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/config/environments/development.rb         |  2 [32m+[m[31m-[m
 app/controllers/application_controller.rb                         | 42 [32m++++++++++++++++[m[31m--------------------------[m
 app/controllers/sessions_controller.rb                            |  2 [32m+[m[31m-[m
 app/controllers/users_controller.rb                               | 23 [32m+++++++++++++++[m[31m--------[m
 app/helpers/sessions_helper.rb                                    |  8 [32m++++++++[m
 app/mailers/user_mailer.rb                                        |  2 [32m+[m[31m-[m
 app/models/user.rb                                                |  1 [32m+[m
 config/environments/development.rb                                |  2 [32m+[m[31m-[m
 config/environments/production.rb                                 | 11 [32m+++++++++++[m
 db/migrate/20141111152852_add_access_level_to_users.rb            |  5 [32m+++++[m
 db/schema.rb                                                      |  3 [32m++[m[31m-[m
 db/seeds.rb                                                       |  7 [32m+++++++[m
 19 files changed, 75 insertions(+), 46 deletions(-)

[33mcommit c9e81fa1c50bc062d0b8c2522036b624638e8699[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Mon Nov 10 14:03:26 2014 +0000

    longer row for sign up form

 app/views/users/_form.html.erb | 10 [32m+++++[m[31m-----[m
 1 file changed, 5 insertions(+), 5 deletions(-)

[33mcommit db080edc18ab6ddc0bf1ab3c9f55887fa873470b[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Mon Nov 10 13:50:17 2014 +0000

    Modified application controller to include sessionshelper

 .c9/metadata/workspace/app/controllers/sessions_controller.rb |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/users_controller.rb    |  2 [32m+[m[31m-[m
 app/controllers/application_controller.rb                     | 30 [32m++++++++++++++++[m[31m--------------[m
 app/controllers/users_controller.rb                           |  2 [32m+[m[31m-[m
 4 files changed, 19 insertions(+), 17 deletions(-)

[33mcommit 6af463201427b009da2e3a681f9b0feeaf7cea1d[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Mon Nov 10 13:44:45 2014 +0000

    modified before_filter : require login

 .c9/metadata/tab2                                             |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/sessions_controller.rb |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/users_controller.rb    |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/helpers/sessions_helper.rb         |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/layouts/application.html.erb |  2 [32m+[m[31m-[m
 Gemfile                                                       |  1 [32m+[m
 app/controllers/application_controller.rb                     | 17 [32m++++++++++++++++[m[31m-[m
 app/controllers/users_controller.rb                           | 18 [32m+++[m[31m---------------[m
 8 files changed, 25 insertions(+), 21 deletions(-)

[33mcommit 1519c779bca8098e4954e15edeea2655c103cc9c[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Mon Nov 10 13:22:44 2014 +0000

    commented out mailer

 .c9/metadata/tab2                                          | 2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/users_controller.rb | 2 [32m+[m[31m-[m
 app/controllers/users_controller.rb                        | 2 [32m+[m[31m-[m
 3 files changed, 3 insertions(+), 3 deletions(-)

[33mcommit 785815404677f0a0677193fd67b13d107e2d82f2[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Mon Nov 10 11:57:44 2014 +0000

    Modified css

 .c9/metadata/tab2                                             |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/layouts/application.html.erb |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/sessions/_form.html.erb      |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/about.html.erb  |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/index.html.erb  |  2 [32m+[m[31m-[m
 app/assets/stylesheets/static_pages.css.scss                  |  1 [32m+[m
 app/controllers/application_controller.rb                     | 17 [32m++[m[31m---------------[m
 app/views/layouts/application.html.erb                        |  6 [32m++[m[31m----[m
 app/views/static_pages/about.html.erb                         |  2 [32m+[m[31m-[m
 app/views/static_pages/index.html.erb                         | 10 [32m+++++[m[31m-----[m
 10 files changed, 16 insertions(+), 30 deletions(-)

[33mcommit dd9f9d78af41dba5f0727bf8960060e58fae30da[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 18:47:40 2014 +0000

    c9 stuff

 .c9/metadata/tab0 | 2 [32m+[m[31m-[m
 1 file changed, 1 insertion(+), 1 deletion(-)

[33mcommit cf882ccbfaf03597e020268294e7ee40649aeac3[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 18:41:34 2014 +0000

    Changed gemfile for heroku

 .c9/metadata/tab0 | 2 [32m+[m[31m-[m
 Gemfile           | 9 [32m++++++++[m[31m-[m
 Gemfile.lock      | 9 [32m+++++++++[m
 3 files changed, 18 insertions(+), 2 deletions(-)

[33mcommit 1dbd19f978c52ff347e86cbbb5eecd87f41784bd[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 18:37:32 2014 +0000

    Added restriction to pages when loggec in/out

 .c9/metadata/tab0                                                 |  2 [32m+[m[31m-[m
 .c9/metadata/tab2                                                 |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/sessions_controller.rb     |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/static_pages_controller.rb |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/controllers/users_controller.rb        |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/helpers/sessions_helper.rb             |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/layouts/application.html.erb     |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/sessions/_form.html.erb          |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/about.html.erb      |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/contact.html.erb    |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/index.html.erb      |  2 [32m+[m[31m-[m
 .c9/metadata/workspace/config/routes.rb                           |  2 [32m+[m[31m-[m
 .gitignore                                                        |  4 [32m++++[m
 app/controllers/application_controller.rb                         | 27 [32m+++++++++++++++++++++++++++[m
 app/controllers/sessions_controller.rb                            |  6 [32m+++++[m[31m-[m
 app/controllers/static_pages_controller.rb                        |  6 [32m++++++[m
 app/controllers/users_controller.rb                               | 20 [32m++++++++++++++++++++[m
 app/helpers/application_helper.rb                                 |  3 [32m+++[m
 app/views/layouts/application.html.erb                            | 13 [32m++++++++++[m[31m---[m
 app/views/sessions/_form.html.erb                                 |  3 [32m++[m[31m-[m
 app/views/static_pages/about.html.erb                             |  6 [32m+++++[m[31m-[m
 app/views/static_pages/contact.html.erb                           |  6 [32m+++++[m[31m-[m
 app/views/users/_form.html.erb                                    | 10 [32m+++++++++[m[31m-[m
 app/views/users/edit.html.erb                                     |  3 [31m---[m
 app/views/users/index.html.erb                                    | 23 [32m+++++++++++++[m[31m----------[m
 app/views/users/new.html.erb                                      |  1 [31m-[m
 app/views/users/show.html.erb                                     |  5 [32m++[m[31m---[m
 27 files changed, 123 insertions(+), 37 deletions(-)

[33mcommit 3d5cbce50f1154bb0547eb6eb51c02059bc5a7f9[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 11:48:20 2014 +0000

    Deploy yo heroku

 .c9/metadata/tab0 | 2 [32m+[m[31m-[m
 1 file changed, 1 insertion(+), 1 deletion(-)

[33mcommit e57ab49783e8092b064e746073d9e7d0211b7652[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 11:43:15 2014 +0000

    updated contact page

 .c9/metadata/tab0                                              | 2 [32m+[m[31m-[m
 .c9/metadata/workspace/app/views/static_pages/contact.html.erb | 2 [32m+[m[31m-[m
 2 files changed, 2 insertions(+), 2 deletions(-)

[33mcommit 2785552db14f2f91e13e05182ba47a6a4c720269[m
Author: Adrian Ching <achc92@gmail.com>
Date:   Fri Nov 7 11:40:46 2014 +0000

    Added Navbar, Home Page, About Page and Contact Page

 .c9/.nakignore                                                    | 17 [32m+++++++++++++++++[m
 .c9/metadata/tab0                                                 |  1 [32m+[m
 .c9/metadata/tab1                                                 |  1 [32m+[m
 .c9/metadata/tab2                                                 |  1 [32m+[m
 .c9/metadata/workspace/app/controllers/sessions_controller.rb     |  1 [32m+[m
 .c9/metadata/workspace/app/controllers/static_pages_controller.rb |  1 [32m+[m
 .c9/metadata/workspace/app/controllers/users_controller.rb        |  1 [32m+[m
 .c9/metadata/workspace/app/helpers/sessions_helper.rb             |  1 [32m+[m
 .c9/metadata/workspace/app/mailers/user_mailer.rb                 |  1 [32m+[m
 .c9/metadata/workspace/app/views/layouts/application.html.erb     |  1 [32m+[m
 .c9/metadata/workspace/app/views/sessions/_form.html.erb          |  1 [32m+[m
 .c9/metadata/workspace/app/views/sessions/new.html.erb            |  1 [32m+[m
 .c9/metadata/workspace/app/views/static_pages/about.html.erb      |  1 [32m+[m
 .c9/metadata/workspace/app/views/static_pages/contact.html.erb    |  1 [32m+[m
 .c9/metadata/workspace/app/views/static_pages/index.html.erb      |  1 [32m+[m
 .c9/metadata/workspace/config/application.rb                      |  1 [32m+[m
 .c9/metadata/workspace/config/environments/development.rb         |  1 [32m+[m
 .c9/metadata/workspace/config/routes.rb                           |  1 [32m+[m
 .c9/project.settings                                              | 35 [32m+++++++++++++++++++++++++++++++++++[m
 Gemfile.lock                                                      |  3 [32m+++[m
 README.md                                                         | 18 [32m++++++++++++++++++[m
 app/assets/javascripts/static_pages.js.coffee                     |  3 [32m+++[m
 app/assets/stylesheets/static_pages.css.scss                      |  3 [32m+++[m
 app/controllers/static_pages_controller.rb                        | 10 [32m++++++++++[m
 app/controllers/users_controller.rb                               |  1 [32m+[m
 app/helpers/static_pages_helper.rb                                |  2 [32m++[m
 app/views/layouts/application.html.erb                            | 44 [32m+++++++++++++++++++++++++++++++[m[31m-------------[m
 app/views/static_pages/about.html.erb                             |  2 [32m++[m
 app/views/static_pages/contact.html.erb                           |  2 [32m++[m
 app/views/static_pages/index.html.erb                             |  8 [32m++++++++[m
 config/application.rb                                             |  1 [32m+[m
 config/environments/development.rb                                |  1 [32m+[m
 config/routes.rb                                                  |  6 [32m++++++[m
 db/schema.rb                                                      | 53 [32m++++++++++++++++++++++++[m[31m-----------------------------[m
 spec/controllers/static_pages_controller_spec.rb                  | 26 [32m++++++++++++++++++++++++++[m
 spec/helpers/static_pages_helper_spec.rb                          | 15 [32m+++++++++++++++[m
 spec/views/static_pages/about.html.erb_spec.rb                    |  5 [32m+++++[m
 spec/views/static_pages/contact.html.erb_spec.rb                  |  5 [32m+++++[m
 spec/views/static_pages/index.html.erb_spec.rb                    |  5 [32m+++++[m
 39 files changed, 240 insertions(+), 42 deletions(-)

[33mcommit 083b69fa850e3153aa74f7e422dde587056c36c0[m
Author: AdrianChingHC <achc92@gmail.com>
Date:   Fri Nov 7 14:45:04 2014 +0800

    Added Users, Sessions

 app/assets/javascripts/sessions.js.coffee    |  3 [32m+++[m
 app/assets/stylesheets/sessions.css.scss     |  3 [32m+++[m
 app/controllers/sessions_controller.rb       | 27 [32m+++++++++++++++++++++++++++[m
 app/controllers/users_controller.rb          | 10 [32m++++++[m[31m----[m
 app/helpers/sessions_helper.rb               | 17 [32m+++++++++++++++++[m
 app/mailers/user_mailer.rb                   |  9 [32m+++++++++[m
 app/models/user.rb                           |  4 [32m++[m[31m--[m
 app/views/layouts/application.html.erb       | 21 [32m+++++++++++++++++++[m[31m--[m
 app/views/sessions/_form.html.erb            | 28 [32m++++++++++++++++++++++++++++[m
 app/views/sessions/new.html.erb              |  7 [32m+++++++[m
 app/views/user_mailer/welcome_email.html.erb | 17 [32m+++++++++++++++++[m
 app/views/user_mailer/welcome_email.text.erb |  9 [32m+++++++++[m
 app/views/users/_form.html.erb               | 56 [32m+++++++++++++++++++++++++++++++++++[m[31m---------------------[m
 app/views/users/edit.html.erb                | 12 [32m++++++++[m[31m----[m
 app/views/users/index.html.erb               | 50 [32m++++++++++++++++++++++++++[m[31m------------------------[m
 app/views/users/new.html.erb                 |  9 [32m++++++[m[31m---[m
 app/views/users/show.html.erb                |  8 [32m++++++[m[31m--[m
 config/environments/development.rb           | 10 [32m++++++++++[m
 config/routes.rb                             |  5 [32m++++[m[31m-[m
 db/schema.rb                                 |  7 [32m++++++[m[31m-[m
 mailtrapenv.sh                               |  2 [32m++[m
 spec/controllers/sessions_controller_spec.rb |  5 [32m+++++[m
 spec/helpers/sessions_helper_spec.rb         | 15 [32m+++++++++++++++[m
 spec/mailers/user_mailer_spec.rb             |  5 [32m+++++[m
 24 files changed, 275 insertions(+), 64 deletions(-)

[33mcommit 0b0d088721d0234544fe8d568e3f3f8412e6be1a[m
Author: AdrianChingHC <achc92@gmail.com>
Date:   Wed Nov 5 01:32:36 2014 +0800

    Adding to Git Repo

 .gitignore                                                |  16 [32m++++++++++[m
 Gemfile                                                   |  46 [32m++++++++++++++++++++++++++++[m
 Gemfile.lock                                              | 144 [32m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++[m
 README.rdoc                                               |  28 [32m+++++++++++++++++[m
 Rakefile                                                  |   6 [32m++++[m
 app/assets/images/.keep                                   |   0
 app/assets/javascripts/application.js                     |  18 [32m+++++++++++[m
 app/assets/javascripts/users.js.coffee                    |   3 [32m++[m
 app/assets/stylesheets/application.css.scss               |   3 [32m++[m
 app/assets/stylesheets/scaffolds.css.scss                 |  69 [32m+++++++++++++++++++++++++++++++++++++++++[m
 app/assets/stylesheets/users.css.scss                     |   3 [32m++[m
 app/controllers/application_controller.rb                 |   5 [32m+++[m
 app/controllers/concerns/.keep                            |   0
 app/controllers/users_controller.rb                       |  74 [32m++++++++++++++++++++++++++++++++++++++++++++[m
 app/helpers/application_helper.rb                         |   2 [32m++[m
 app/helpers/users_helper.rb                               |   2 [32m++[m
 app/mailers/.keep                                         |   0
 app/models/.keep                                          |   0
 app/models/concerns/.keep                                 |   0
 app/models/user.rb                                        |   6 [32m++++[m
 app/views/layouts/application.html.erb                    |  14 [32m+++++++++[m
 app/views/users/_form.html.erb                            |  25 [32m+++++++++++++++[m
 app/views/users/edit.html.erb                             |   6 [32m++++[m
 app/views/users/index.html.erb                            |  27 [32m++++++++++++++++[m
 app/views/users/index.json.jbuilder                       |   4 [32m+++[m
 app/views/users/new.html.erb                              |   5 [32m+++[m
 app/views/users/show.html.erb                             |  14 [32m+++++++++[m
 app/views/users/show.json.jbuilder                        |   1 [32m+[m
 bin/bundle                                                |   3 [32m++[m
 bin/rails                                                 |   4 [32m+++[m
 bin/rake                                                  |   4 [32m+++[m
 config.ru                                                 |   4 [32m+++[m
 config/application.rb                                     |  23 [32m++++++++++++++[m
 config/boot.rb                                            |   4 [32m+++[m
 config/database.yml                                       |  25 [32m+++++++++++++++[m
 config/environment.rb                                     |   5 [32m+++[m
 config/environments/development.rb                        |  37 [32m++++++++++++++++++++++[m
 config/environments/production.rb                         |  78 [32m+++++++++++++++++++++++++++++++++++++++++++++++[m
 config/environments/test.rb                               |  39 [32m++++++++++++++++++++++++[m
 config/initializers/assets.rb                             |   8 [32m+++++[m
 config/initializers/backtrace_silencers.rb                |   7 [32m+++++[m
 config/initializers/cookies_serializer.rb                 |   3 [32m++[m
 config/initializers/filter_parameter_logging.rb           |   4 [32m+++[m
 config/initializers/inflections.rb                        |  16 [32m++++++++++[m
 config/initializers/mime_types.rb                         |   4 [32m+++[m
 config/initializers/session_store.rb                      |   3 [32m++[m
 config/initializers/wrap_parameters.rb                    |  14 [32m+++++++++[m
 config/locales/en.yml                                     |  23 [32m++++++++++++++[m
 config/routes.rb                                          |  59 [32m+++++++++++++++++++++++++++++++++++[m
 config/secrets.yml                                        |  22 [32m++++++++++++++[m
 db/migrate/20141104102509_create_users.rb                 |  10 [32m++++++[m
 db/migrate/20141104164726_add_password_digest_to_users.rb |   5 [32m+++[m
 db/schema.rb                                              |  24 [32m+++++++++++++++[m
 db/seeds.rb                                               |   7 [32m+++++[m
 lib/assets/.keep                                          |   0
 lib/tasks/.keep                                           |   0
 log/.keep                                                 |   0
 public/404.html                                           |  67 [32m++++++++++++++++++++++++++++++++++++++++[m
 public/422.html                                           |  67 [32m++++++++++++++++++++++++++++++++++++++++[m
 public/500.html                                           |  66 [32m++++++++++++++++++++++++++++++++++++++++[m
 public/favicon.ico                                        |   0
 public/robots.txt                                         |   5 [32m+++[m
 spec/controllers/users_controller_spec.rb                 | 159 [32m+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++[m
 spec/helpers/users_helper_spec.rb                         |  15 [32m+++++++++[m
 spec/models/user_spec.rb                                  |   5 [32m+++[m
 spec/requests/users_spec.rb                               |  10 [32m++++++[m
 spec/routing/users_routing_spec.rb                        |  35 [32m+++++++++++++++++++++[m
 spec/views/users/edit.html.erb_spec.rb                    |  21 [32m+++++++++++++[m
 spec/views/users/index.html.erb_spec.rb                   |  22 [32m++++++++++++++[m
 spec/views/users/new.html.erb_spec.rb                     |  21 [32m+++++++++++++[m
 spec/views/users/show.html.erb_spec.rb                    |  16 [32m++++++++++[m
 test/controllers/.keep                                    |   0
 test/fixtures/.keep                                       |   0
 test/helpers/.keep                                        |   0
 test/integration/.keep                                    |   0
 test/mailers/.keep                                        |   0
 test/models/.keep                                         |   0
 test/test_helper.rb                                       |  10 [32m++++++[m
 vendor/assets/javascripts/.keep                           |   0
 vendor/assets/stylesheets/.keep                           |   0
 80 files changed, 1475 insertions(+)
