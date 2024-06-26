// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accounts { class AccountManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accounts::AccountManager>
{
	static constexpr fixed_string class_name = "android/accounts/AccountManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER)
#define SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/accounts/AccountManagerCallback.h>
#include <scapix/java_api/android/accounts/AccountManagerFuture.h>
#include <scapix/java_api/android/accounts/AuthenticatorDescription.h>
#include <scapix/java_api/android/accounts/OnAccountsUpdateListener.h>
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accounts::AccountManager : public jni::object_base<"android/accounts/AccountManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_AUTHENTICATOR_INTENT() { return get_static_field<"ACTION_AUTHENTICATOR_INTENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTHENTICATOR_ATTRIBUTES_NAME() { return get_static_field<"AUTHENTICATOR_ATTRIBUTES_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTHENTICATOR_META_DATA_NAME() { return get_static_field<"AUTHENTICATOR_META_DATA_NAME", jni::ref<java::lang::String>>(); }
	static jint ERROR_CODE_BAD_ARGUMENTS() { return get_static_field<"ERROR_CODE_BAD_ARGUMENTS", jint>(); }
	static jint ERROR_CODE_BAD_AUTHENTICATION() { return get_static_field<"ERROR_CODE_BAD_AUTHENTICATION", jint>(); }
	static jint ERROR_CODE_BAD_REQUEST() { return get_static_field<"ERROR_CODE_BAD_REQUEST", jint>(); }
	static jint ERROR_CODE_CANCELED() { return get_static_field<"ERROR_CODE_CANCELED", jint>(); }
	static jint ERROR_CODE_INVALID_RESPONSE() { return get_static_field<"ERROR_CODE_INVALID_RESPONSE", jint>(); }
	static jint ERROR_CODE_NETWORK_ERROR() { return get_static_field<"ERROR_CODE_NETWORK_ERROR", jint>(); }
	static jint ERROR_CODE_REMOTE_EXCEPTION() { return get_static_field<"ERROR_CODE_REMOTE_EXCEPTION", jint>(); }
	static jint ERROR_CODE_UNSUPPORTED_OPERATION() { return get_static_field<"ERROR_CODE_UNSUPPORTED_OPERATION", jint>(); }
	static jni::ref<java::lang::String> KEY_ACCOUNTS() { return get_static_field<"KEY_ACCOUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ACCOUNT_AUTHENTICATOR_RESPONSE() { return get_static_field<"KEY_ACCOUNT_AUTHENTICATOR_RESPONSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ACCOUNT_MANAGER_RESPONSE() { return get_static_field<"KEY_ACCOUNT_MANAGER_RESPONSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ACCOUNT_NAME() { return get_static_field<"KEY_ACCOUNT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ACCOUNT_TYPE() { return get_static_field<"KEY_ACCOUNT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ANDROID_PACKAGE_NAME() { return get_static_field<"KEY_ANDROID_PACKAGE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUTHENTICATOR_TYPES() { return get_static_field<"KEY_AUTHENTICATOR_TYPES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUTHTOKEN() { return get_static_field<"KEY_AUTHTOKEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUTH_FAILED_MESSAGE() { return get_static_field<"KEY_AUTH_FAILED_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUTH_TOKEN_LABEL() { return get_static_field<"KEY_AUTH_TOKEN_LABEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_BOOLEAN_RESULT() { return get_static_field<"KEY_BOOLEAN_RESULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CALLER_PID() { return get_static_field<"KEY_CALLER_PID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CALLER_UID() { return get_static_field<"KEY_CALLER_UID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ERROR_CODE() { return get_static_field<"KEY_ERROR_CODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ERROR_MESSAGE() { return get_static_field<"KEY_ERROR_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_INTENT() { return get_static_field<"KEY_INTENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LAST_AUTHENTICATED_TIME() { return get_static_field<"KEY_LAST_AUTHENTICATED_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PASSWORD() { return get_static_field<"KEY_PASSWORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_USERDATA() { return get_static_field<"KEY_USERDATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOGIN_ACCOUNTS_CHANGED_ACTION() { return get_static_field<"LOGIN_ACCOUNTS_CHANGED_ACTION", jni::ref<java::lang::String>>(); }

	static jni::ref<android::accounts::AccountManager> get(jni::ref<android::content::Context> context) { return call_static_method<"get", jni::ref<android::accounts::AccountManager>>(context); }
	jni::ref<java::lang::String> getPassword(jni::ref<android::accounts::Account> account) { return call_method<"getPassword", jni::ref<java::lang::String>>(account); }
	jni::ref<java::lang::String> getUserData(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> key) { return call_method<"getUserData", jni::ref<java::lang::String>>(account, key); }
	jni::ref<jni::array<android::accounts::AuthenticatorDescription>> getAuthenticatorTypes() { return call_method<"getAuthenticatorTypes", jni::ref<jni::array<android::accounts::AuthenticatorDescription>>>(); }
	jni::ref<jni::array<android::accounts::Account>> getAccounts() { return call_method<"getAccounts", jni::ref<jni::array<android::accounts::Account>>>(); }
	jni::ref<jni::array<android::accounts::Account>> getAccountsByTypeForPackage(jni::ref<java::lang::String> type, jni::ref<java::lang::String> packageName) { return call_method<"getAccountsByTypeForPackage", jni::ref<jni::array<android::accounts::Account>>>(type, packageName); }
	jni::ref<jni::array<android::accounts::Account>> getAccountsByType(jni::ref<java::lang::String> type) { return call_method<"getAccountsByType", jni::ref<jni::array<android::accounts::Account>>>(type); }
	jni::ref<android::accounts::AccountManagerFuture> hasFeatures(jni::ref<android::accounts::Account> account, jni::ref<jni::array<java::lang::String>> features, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"hasFeatures", jni::ref<android::accounts::AccountManagerFuture>>(account, features, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> getAccountsByTypeAndFeatures(jni::ref<java::lang::String> type, jni::ref<jni::array<java::lang::String>> features, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"getAccountsByTypeAndFeatures", jni::ref<android::accounts::AccountManagerFuture>>(type, features, callback, handler); }
	jboolean addAccountExplicitly(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> password, jni::ref<android::os::Bundle> userdata) { return call_method<"addAccountExplicitly", jboolean>(account, password, userdata); }
	jboolean notifyAccountAuthenticated(jni::ref<android::accounts::Account> account) { return call_method<"notifyAccountAuthenticated", jboolean>(account); }
	jni::ref<android::accounts::AccountManagerFuture> renameAccount(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> newName, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"renameAccount", jni::ref<android::accounts::AccountManagerFuture>>(account, newName, callback, handler); }
	jni::ref<java::lang::String> getPreviousName(jni::ref<android::accounts::Account> account) { return call_method<"getPreviousName", jni::ref<java::lang::String>>(account); }
	jni::ref<android::accounts::AccountManagerFuture> removeAccount(jni::ref<android::accounts::Account> account, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"removeAccount", jni::ref<android::accounts::AccountManagerFuture>>(account, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> removeAccount(jni::ref<android::accounts::Account> account, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"removeAccount", jni::ref<android::accounts::AccountManagerFuture>>(account, activity, callback, handler); }
	jboolean removeAccountExplicitly(jni::ref<android::accounts::Account> account) { return call_method<"removeAccountExplicitly", jboolean>(account); }
	void invalidateAuthToken(jni::ref<java::lang::String> accountType, jni::ref<java::lang::String> authToken) { return call_method<"invalidateAuthToken", void>(accountType, authToken); }
	jni::ref<java::lang::String> peekAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType) { return call_method<"peekAuthToken", jni::ref<java::lang::String>>(account, authTokenType); }
	void setPassword(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> password) { return call_method<"setPassword", void>(account, password); }
	void clearPassword(jni::ref<android::accounts::Account> account) { return call_method<"clearPassword", void>(account); }
	void setUserData(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"setUserData", void>(account, key, value); }
	void setAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jni::ref<java::lang::String> authToken) { return call_method<"setAuthToken", void>(account, authTokenType, authToken); }
	jni::ref<java::lang::String> blockingGetAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jboolean notifyAuthFailure) { return call_method<"blockingGetAuthToken", jni::ref<java::lang::String>>(account, authTokenType, notifyAuthFailure); }
	jni::ref<android::accounts::AccountManagerFuture> getAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jni::ref<android::os::Bundle> options, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"getAuthToken", jni::ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, activity, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> getAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jboolean notifyAuthFailure, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"getAuthToken", jni::ref<android::accounts::AccountManagerFuture>>(account, authTokenType, notifyAuthFailure, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> getAuthToken(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jni::ref<android::os::Bundle> options, jboolean notifyAuthFailure, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"getAuthToken", jni::ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, notifyAuthFailure, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> addAccount(jni::ref<java::lang::String> accountType, jni::ref<java::lang::String> authTokenType, jni::ref<jni::array<java::lang::String>> requiredFeatures, jni::ref<android::os::Bundle> addAccountOptions, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"addAccount", jni::ref<android::accounts::AccountManagerFuture>>(accountType, authTokenType, requiredFeatures, addAccountOptions, activity, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> confirmCredentials(jni::ref<android::accounts::Account> account, jni::ref<android::os::Bundle> options, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"confirmCredentials", jni::ref<android::accounts::AccountManagerFuture>>(account, options, activity, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> updateCredentials(jni::ref<android::accounts::Account> account, jni::ref<java::lang::String> authTokenType, jni::ref<android::os::Bundle> options, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"updateCredentials", jni::ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, activity, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> editProperties(jni::ref<java::lang::String> accountType, jni::ref<android::app::Activity> activity, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"editProperties", jni::ref<android::accounts::AccountManagerFuture>>(accountType, activity, callback, handler); }
	jni::ref<android::accounts::AccountManagerFuture> getAuthTokenByFeatures(jni::ref<java::lang::String> accountType, jni::ref<java::lang::String> authTokenType, jni::ref<jni::array<java::lang::String>> features, jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> addAccountOptions, jni::ref<android::os::Bundle> getAuthTokenOptions, jni::ref<android::accounts::AccountManagerCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"getAuthTokenByFeatures", jni::ref<android::accounts::AccountManagerFuture>>(accountType, authTokenType, features, activity, addAccountOptions, getAuthTokenOptions, callback, handler); }
	static jni::ref<android::content::Intent> newChooseAccountIntent(jni::ref<android::accounts::Account> selectedAccount, jni::ref<java::util::ArrayList> allowableAccounts, jni::ref<jni::array<java::lang::String>> allowableAccountTypes, jboolean alwaysPromptForAccount, jni::ref<java::lang::String> descriptionOverrideText, jni::ref<java::lang::String> addAccountAuthTokenType, jni::ref<jni::array<java::lang::String>> addAccountRequiredFeatures, jni::ref<android::os::Bundle> addAccountOptions) { return call_static_method<"newChooseAccountIntent", jni::ref<android::content::Intent>>(selectedAccount, allowableAccounts, allowableAccountTypes, alwaysPromptForAccount, descriptionOverrideText, addAccountAuthTokenType, addAccountRequiredFeatures, addAccountOptions); }
	static jni::ref<android::content::Intent> newChooseAccountIntent(jni::ref<android::accounts::Account> selectedAccount, jni::ref<java::util::List> allowableAccounts, jni::ref<jni::array<java::lang::String>> allowableAccountTypes, jni::ref<java::lang::String> descriptionOverrideText, jni::ref<java::lang::String> addAccountAuthTokenType, jni::ref<jni::array<java::lang::String>> addAccountRequiredFeatures, jni::ref<android::os::Bundle> addAccountOptions) { return call_static_method<"newChooseAccountIntent", jni::ref<android::content::Intent>>(selectedAccount, allowableAccounts, allowableAccountTypes, descriptionOverrideText, addAccountAuthTokenType, addAccountRequiredFeatures, addAccountOptions); }
	void addOnAccountsUpdatedListener(jni::ref<android::accounts::OnAccountsUpdateListener> listener, jni::ref<android::os::Handler> handler, jboolean updateImmediately) { return call_method<"addOnAccountsUpdatedListener", void>(listener, handler, updateImmediately); }
	void removeOnAccountsUpdatedListener(jni::ref<android::accounts::OnAccountsUpdateListener> listener) { return call_method<"removeOnAccountsUpdatedListener", void>(listener); }

protected:

	AccountManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGER
