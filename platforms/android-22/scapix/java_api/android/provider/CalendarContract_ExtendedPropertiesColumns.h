// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract_ExtendedPropertiesColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract_ExtendedPropertiesColumns>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract$ExtendedPropertiesColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract_ExtendedPropertiesColumns : public jni::object_base<"android/provider/CalendarContract$ExtendedPropertiesColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> EVENT_ID() { return get_static_field<"EVENT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALUE() { return get_static_field<"VALUE", jni::ref<java::lang::String>>(); }


protected:

	CalendarContract_ExtendedPropertiesColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EXTENDEDPROPERTIESCOLUMNS
