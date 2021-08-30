[33mcommit 079b4cc49e5c75ce18f873338f344e2786369da9[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m, [m[1;31morigin/main[m[33m)[m
Author: Kadir Diwan <diwan.kadir18@siesgst.ac.in>
Date:   Mon Aug 30 18:54:30 2021 +0530

    Recommendation App for Coursera coursera courses

[1mdiff --git a/.gitattributes b/.gitattributes[m
[1mnew file mode 100644[m
[1mindex 0000000..dfe0770[m
[1m--- /dev/null[m
[1m+++ b/.gitattributes[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m# Auto detect text files and perform LF normalization[m
[32m+[m[32m* text=auto[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..4d29575[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m# See https://help.github.com/articles/ignoring-files/ for more about ignoring files.[m
[32m+[m
[32m+[m[32m# dependencies[m
[32m+[m[32m/node_modules[m
[32m+[m[32m/.pnp[m
[32m+[m[32m.pnp.js[m
[32m+[m
[32m+[m[32m# testing[m
[32m+[m[32m/coverage[m
[32m+[m
[32m+[m[32m# production[m
[32m+[m[32m/build[m
[32m+[m
[32m+[m[32m# misc[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m.env.local[m
[32m+[m[32m.env.development.local[m
[32m+[m[32m.env.test.local[m
[32m+[m[32m.env.production.local[m
[32m+[m
[32m+[m[32mnpm-debug.log*[m
[32m+[m[32myarn-debug.log*[m
[32m+[m[32myarn-error.log*[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..0c83cde[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,70 @@[m
[32m+[m[32m# Getting Started with Create React App[m
[32m+[m
[32m+[m[32mThis project was bootstrapped with [Create React App](https://github.com/facebook/create-react-app).[m
[32m+[m
[32m+[m[32m## Available Scripts[m
[32m+[m
[32m+[m[32mIn the project directory, you can run:[m
[32m+[m
[32m+[m[32m### `npm start`[m
[32m+[m
[32m+[m[32mRuns the app in the development mode.\[m
[32m+[m[32mOpen [http://localhost:3000](http://localhost:3000) to view it in the browser.[m
[32m+[m
[32m+[m[32mThe page will reload if you make edits.\[m
[32m+[m[32mYou will also see any lint errors in the console.[m
[32m+[m
[32m+[m[32m### `npm test`[m
[32m+[m
[32m+[m[32mLaunches the test runner in the interactive watch mode.\[m
[32m+[m[32mSee the section about [running tests](https://facebook.github.io/create-react-app/docs/running-tests) for more information.[m
[32m+[m
[32m+[m[32m### `npm run build`[m
[32m+[m
[32m+[m[32mBuilds the app for production to the `build` folder.\[m
[32m+[m[32mIt correctly bundles React in production mode and optimizes the build for the best performance.[m
[32m+[m
[32m+[m[32mThe build is minified and the filenames include the hashes.\[m
[32m+[m[32mYour app is ready to be deployed![m
[32m+[m
[32m+[m[32mSee the section about [deployment](https://facebook.github.io/create-react-app/docs/deployment) for more information.[m
[32m+[m
[32m+[m[32m### `npm run eject`[m
[32m+[m
[32m+[m[32m**Note: this is a one-way operation. Once you `eject`, you can’t go back!**[m
[32m+[m
[32m+[m[32mIf you aren’t satisfied with the build tool and configuration choices, you can `eject` at any time. This command will remove the single build dependency from your project.[m
[32m+[m
[32m+[m[32mInstead, it will copy all the configuration files and the transitive dependencies (webpack, Babel, ESLint, etc) right into your project so you have full control over them. All of the commands except `eject` will still work, but they will point to the copied scripts so you can tweak them. At this point you’re on your own.[m
[32m+[m
[32m+[m[32mYou don’t have to ever use `eject`. The curated feature set is suitable for small and middle deployments, and you shouldn’t feel obligated to use this feature. However we understand that this tool wouldn’t be useful if you couldn’t customize it when you are ready for it.[m
[32m+[m
[32m+[m[32m## Learn More[m
[32m+[m
[32m+[m[32mYou can learn more in the [Create React App documentation](https://facebook.github.io/create-react-app/docs/getting-started).[m
[32m+[m
[32m+[m[32mTo learn React, check out the [React documentation](https://reactjs.org/).[m
[32m+[m
[32m+[m[32m### Code Splitting[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/code-splitting](https://facebook.github.io/create-react-app/docs/code-splitting)[m
[32m+[m
[32m+[m[32m### Analyzing the Bundle Size[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/analyzing-the-bundle-size](https://facebook.github.io/create-react-app/docs/analyzing-the-bundle-size)[m
[32m+[m
[32m+[m[32m### Making a Progressive Web App[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/making-a-progressive-web-app](https://facebook.github.io/create-react-app/docs/making-a-progressive-web-app)[m
[32m+[m
[32m+[m[32m### Advanced Configuration[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/advanced-configuration](https://facebook.github.io/create-react-app/docs/advanced-configuration)[m
[32m+[m
[32m+[m[32m### Deployment[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/deployment](https://facebook.github.io/create-react-app/docs/deployment)[m
[32m+[m
[32m+[m[32m### `npm run build` fails to minify[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/troubleshooting#npm-run-build-fails-to-minify](https://facebook.github.io/create-react-app/docs/troubleshooting#npm-run-build-fails-to-minify)[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mnew file mode 100644[m
[1mindex 0000000..eb7a01f[m
[1m--- /dev/null[m
[1m+++ b/package-lock.json[m
[36m@@ -0,0 +1,16369 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "recommendation-courses",[m
[32m+[m[32m  "version": "0.1.0",[m
[32m+[m[32m  "lockfileVersion": 1,[m
[32m+[m[32m  "requires": true,[m
[32m+[m[32m  "dependencies": {[m
[32m+[m[32m    "@babel/code-frame": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/code-frame/-/code-frame-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-9pzDqyc6OLDaqe+zbACgFkb6fKMNG6CObKpnYXChRsvYGyEdc7CA2BaqeOM+vOtCS5ndmJicPJhKAwYRI6UfFw==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/highlight": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/compat-data": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/compat-data/-/compat-data-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-0NqAC1IJE0S0+lL1SWFMxMkz1pKCNCjI4tr2Zx4LJSXxCLAdr6KyArnY+sno5m3yH9g737ygOyPABDsnXkpxiA=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/core": {[m
[32m+[m[32m      "version": "7.12.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/core/-/core-7.12.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-0qXcZYKZp3/6N2jKYVxZv0aNCsxTSVCiK72DTiTYZAu7sjg73W0/aynWjMbiGd87EQL4WyA8reiJVh92AVla9g==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/code-frame": "^7.10.4",[m
[32m+[m[32m        "@babel/generator": "^7.12.1",[m
[32m+[m[32m        "@babel/helper-module-transforms": "^7.12.1",[m
[32m+[m[32m        "@babel/helpers": "^7.12.1",[m
[32m+[m[32m        "@babel/parser": "^7.12.3",[m
[32m+[m[32m        "@babel/template": "^7.10.4",[m
[32m+[m[32m        "@babel/traverse": "^7.12.1",[m
[32m+[m[32m        "@babel/types": "^7.12.1",[m
[32m+[m[32m        "convert-source-map": "^1.7.0",[m
[32m+[m[32m        "debug": "^4.1.0",[m
[32m+[m[32m        "gensync": "^1.0.0-beta.1",[m
[32m+[m[32m        "json5": "^2.1.2",[m
[32m+[m[32m        "lodash": "^4.17.19",[m
[32m+[m[32m        "resolve": "^1.3.2",[m
[32m+[m[32m        "semver": "^5.4.1",[m
[32m+[m[32m        "source-map": "^0.5.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "semver": {[m
[32m+[m[32m          "version": "5.7.1",[m
[32m+[m[32m          "resolved": "https://registry.npmjs.org/semver/-/semver-5.7.1.tgz",[m
[32m+[m[32m          "integrity": "sha512-sauaDf/PZdVgrLTNYHRtpXa1iRiKcaebiKQ1BJdpQlWH2lCvexQdX55snPFyK7QzpudqbCI0qXFfOasHdyNDGQ=="[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/generator": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/generator/-/generator-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-eKl4XdMrbpYvuB505KTta4AV9g+wWzmVBW69tX0H2NwKVKd2YJbKgyK6M8j/rgLbmHOYJn6rUklV677nOyJrEQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.15.0",[m
[32m+[m[32m        "jsesc": "^2.5.1",[m
[32m+[m[32m        "source-map": "^0.5.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-annotate-as-pure": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-annotate-as-pure/-/helper-annotate-as-pure-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-EivH9EgBIb+G8ij1B2jAwSH36WnGvkQSEC6CkX/6v6ZFlw5fVOHvsgGF4uiEHO2GzMvunZb6tDLQEQSdrdocrA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-builder-binary-assignment-operator-visitor": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-builder-binary-assignment-operator-visitor/-/helper-builder-binary-assignment-operator-visitor-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-YTA/Twn0vBXDVGJuAX6PwW7x5zQei1luDDo2Pl6q1qZ7hVNl0RZrhHCQG/ArGpR29Vl7ETiB8eJyrvpuRp300w==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-explode-assignable-expression": "^7.14.5",[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-compilation-targets": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-compilation-targets/-/helper-compilation-targets-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-h+/9t0ncd4jfZ8wsdAsoIxSa61qhBYlycXiHWqJaQBCXAhDCMbPRSMTGnZIkkmt1u4ag+UQmuqcILwqKzZ4N2A==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/compat-data": "^7.15.0",[m
[32m+[m[32m        "@babel/helper-validator-option": "^7.14.5",[m
[32m+[m[32m        "browserslist": "^4.16.6",[m
[32m+[m[32m        "semver": "^6.3.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "semver": {[m
[32m+[m[32m          "version": "6.3.0",[m
[32m+[m[32m          "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.0.tgz",[m
[32m+[m[32m          "integrity": "sha512-b39TBaTSfV6yBrapU89p5fKekE2m/NwnDocOVruQFS1/veMgdzuPcnOM34M6CwxW8jH/lxEa5rBoDeUwu5HHTw=="[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-create-class-features-plugin": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-create-class-features-plugin/-/helper-create-class-features-plugin-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-MdmDXgvTIi4heDVX/e9EFfeGpugqm9fobBVg/iioE8kueXrOHdRDe36FAY7SnE9xXLVeYCoJR/gdrBEIHRC83Q==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-annotate-as-pure": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-function-name": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-member-expression-to-functions": "^7.15.0",[m
[32m+[m[32m        "@babel/helper-optimise-call-expression": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-replace-supers": "^7.15.0",[m
[32m+[m[32m        "@babel/helper-split-export-declaration": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-create-regexp-features-plugin": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-create-regexp-features-plugin/-/helper-create-regexp-features-plugin-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-TLawwqpOErY2HhWbGJ2nZT5wSkR192QpN+nBg1THfBfftrlvOh+WbhrxXCH4q4xJ9Gl16BGPR/48JA+Ryiho/A==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-annotate-as-pure": "^7.14.5",[m
[32m+[m[32m        "regexpu-core": "^4.7.1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-define-polyfill-provider": {[m
[32m+[m[32m      "version": "0.2.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-define-polyfill-provider/-/helper-define-polyfill-provider-0.2.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-RH3QDAfRMzj7+0Nqu5oqgO5q9mFtQEVvCRsi8qCEfzLR9p2BHfn5FzhSB2oj1fF7I2+DcTORkYaQ6aTR9Cofew==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-compilation-targets": "^7.13.0",[m
[32m+[m[32m        "@babel/helper-module-imports": "^7.12.13",[m
[32m+[m[32m        "@babel/helper-plugin-utils": "^7.13.0",[m
[32m+[m[32m        "@babel/traverse": "^7.13.0",[m
[32m+[m[32m        "debug": "^4.1.1",[m
[32m+[m[32m        "lodash.debounce": "^4.0.8",[m
[32m+[m[32m        "resolve": "^1.14.2",[m
[32m+[m[32m        "semver": "^6.1.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "semver": {[m
[32m+[m[32m          "version": "6.3.0",[m
[32m+[m[32m          "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.0.tgz",[m
[32m+[m[32m          "integrity": "sha512-b39TBaTSfV6yBrapU89p5fKekE2m/NwnDocOVruQFS1/veMgdzuPcnOM34M6CwxW8jH/lxEa5rBoDeUwu5HHTw=="[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-explode-assignable-expression": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-explode-assignable-expression/-/helper-explode-assignable-expression-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-Htb24gnGJdIGT4vnRKMdoXiOIlqOLmdiUYpAQ0mYfgVT/GDm8GOYhgi4GL+hMKrkiPRohO4ts34ELFsGAPQLDQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-function-name": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-function-name/-/helper-function-name-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-Gjna0AsXWfFvrAuX+VKcN/aNNWonizBj39yGwUzVDVTlMYJMK2Wp6xdpy72mfArFq5uK+NOuexfzZlzI1z9+AQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-get-function-arity": "^7.14.5",[m
[32m+[m[32m        "@babel/template": "^7.14.5",[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-get-function-arity": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-get-function-arity/-/helper-get-function-arity-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-I1Db4Shst5lewOM4V+ZKJzQ0JGGaZ6VY1jYvMghRjqs6DWgxLCIyFt30GlnKkfUeFLpJt2vzbMVEXVSXlIFYUg==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-hoist-variables": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-hoist-variables/-/helper-hoist-variables-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-R1PXiz31Uc0Vxy4OEOm07x0oSjKAdPPCh3tPivn/Eo8cvz6gveAeuyUUPB21Hoiif0uoPQSSdhIPS3352nvdyQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-member-expression-to-functions": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-member-expression-to-functions/-/helper-member-expression-to-functions-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-Jq8H8U2kYiafuj2xMTPQwkTBnEEdGKpT35lJEQsRRjnG0LW3neucsaMWLgKcwu3OHKNeYugfw+Z20BXBSEs2Lg==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.15.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-module-imports": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-module-imports/-/helper-module-imports-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-SwrNHu5QWS84XlHwGYPDtCxcA0hrSlL2yhWYLgeOc0w7ccOl2qv4s/nARI0aYZW+bSwAL5CukeXA47B/1NKcnQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-module-transforms": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-module-transforms/-/helper-module-transforms-7.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-RkGiW5Rer7fpXv9m1B3iHIFDZdItnO2/BLfWVW/9q7+KqQSDY5kUfQEbzdXM1MVhJGcugKV7kRrNVzNxmk7NBg==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-module-imports": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-replace-supers": "^7.15.0",[m
[32m+[m[32m        "@babel/helper-simple-access": "^7.14.8",[m
[32m+[m[32m        "@babel/helper-split-export-declaration": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-validator-identifier": "^7.14.9",[m
[32m+[m[32m        "@babel/template": "^7.14.5",[m
[32m+[m[32m        "@babel/traverse": "^7.15.0",[m
[32m+[m[32m        "@babel/types": "^7.15.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-optimise-call-expression": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-optimise-call-expression/-/helper-optimise-call-expression-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-IqiLIrODUOdnPU9/F8ib1Fx2ohlgDhxnIDU7OEVi+kAbEZcyiF7BLU8W6PfvPi9LzztjS7kcbzbmL7oG8kD6VA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-plugin-utils": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-plugin-utils/-/helper-plugin-utils-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-/37qQCE3K0vvZKwoK4XU/irIJQdIfCJuhU5eKnNxpFDsOkgFaUAwbv+RYw6eYgsC0E4hS7r5KqGULUogqui0fQ=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-remap-async-to-generator": {[m
[32m+[m[32m      "version": "7.14.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-remap-async-to-generator/-/helper-remap-async-to-generator-7.14.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-rLQKdQU+HYlxBwQIj8dk4/0ENOUEhA/Z0l4hN8BexpvmSMN9oA9EagjnhnDpNsRdWCfjwa4mn/HyBXO9yhQP6A==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@babel/helper-annotate-as-pure": "^7.14.5",[m
[32m+[m[32m        "@babel/helper-wrap-function": "^7.14.5",[m
[32m+[m[32m        "@babel/types": "^7.14.5"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@babel/helper-replace-supers": {[m
[32m+[m[32m      "version": "7.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-replace-supers/-/helper-replace-supers-7.