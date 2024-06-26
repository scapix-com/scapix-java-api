// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class Event_ReporterCategory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::Event_ReporterCategory>
{
	static constexpr fixed_string class_name = "sun/security/util/Event$ReporterCategory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::Event_ReporterCategory : public jni::object_base<"sun/security/util/Event$ReporterCategory",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::util::Event_ReporterCategory> ZIPFILEATTRS() { return get_static_field<"ZIPFILEATTRS", jni::ref<sun::security::util::Event_ReporterCategory>>(); }

	static jni::ref<jni::array<sun::security::util::Event_ReporterCategory>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::util::Event_ReporterCategory>>>(); }
	static jni::ref<sun::security::util::Event_ReporterCategory> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::util::Event_ReporterCategory>>(name); }

protected:

	Event_ReporterCategory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_EVENT_REPORTERCATEGORY
