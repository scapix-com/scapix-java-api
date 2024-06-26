// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Contacts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Contacts>
{
	static constexpr fixed_string class_name = "android/provider/Contacts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/Contacts_SettingsColumns.h>
#include <scapix/java_api/android/provider/Contacts_Settings.h>
#include <scapix/java_api/android/provider/Contacts_PresenceColumns.h>
#include <scapix/java_api/android/provider/Contacts_PhotosColumns.h>
#include <scapix/java_api/android/provider/Contacts_Photos.h>
#include <scapix/java_api/android/provider/Contacts_PhonesColumns.h>
#include <scapix/java_api/android/provider/Contacts_Phones.h>
#include <scapix/java_api/android/provider/Contacts_PeopleColumns.h>
#include <scapix/java_api/android/provider/Contacts_People.h>
#include <scapix/java_api/android/provider/Contacts_Organizations.h>
#include <scapix/java_api/android/provider/Contacts_OrganizationColumns.h>
#include <scapix/java_api/android/provider/Contacts_Intents.h>
#include <scapix/java_api/android/provider/Contacts_GroupsColumns.h>
#include <scapix/java_api/android/provider/Contacts_Groups.h>
#include <scapix/java_api/android/provider/Contacts_GroupMembership.h>
#include <scapix/java_api/android/provider/Contacts_ExtensionsColumns.h>
#include <scapix/java_api/android/provider/Contacts_Extensions.h>
#include <scapix/java_api/android/provider/Contacts_ContactMethodsColumns.h>
#include <scapix/java_api/android/provider/Contacts_ContactMethods.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Contacts : public jni::object_base<"android/provider/Contacts",
	java::lang::Object>
{
public:

	using SettingsColumns = Contacts_SettingsColumns;
	using Settings = Contacts_Settings;
	using PresenceColumns = Contacts_PresenceColumns;
	using PhotosColumns = Contacts_PhotosColumns;
	using Photos = Contacts_Photos;
	using PhonesColumns = Contacts_PhonesColumns;
	using Phones = Contacts_Phones;
	using PeopleColumns = Contacts_PeopleColumns;
	using People = Contacts_People;
	using Organizations = Contacts_Organizations;
	using OrganizationColumns = Contacts_OrganizationColumns;
	using Intents = Contacts_Intents;
	using GroupsColumns = Contacts_GroupsColumns;
	using Groups = Contacts_Groups;
	using GroupMembership = Contacts_GroupMembership;
	using ExtensionsColumns = Contacts_ExtensionsColumns;
	using Extensions = Contacts_Extensions;
	using ContactMethodsColumns = Contacts_ContactMethodsColumns;
	using ContactMethods = Contacts_ContactMethods;

	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jint KIND_EMAIL() { return get_static_field<"KIND_EMAIL", jint>(); }
	static jint KIND_IM() { return get_static_field<"KIND_IM", jint>(); }
	static jint KIND_ORGANIZATION() { return get_static_field<"KIND_ORGANIZATION", jint>(); }
	static jint KIND_PHONE() { return get_static_field<"KIND_PHONE", jint>(); }
	static jint KIND_POSTAL() { return get_static_field<"KIND_POSTAL", jint>(); }


protected:

	Contacts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS
