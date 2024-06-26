// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class ObjectInputFilter_Status; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::ObjectInputFilter_Status>
{
	static constexpr fixed_string class_name = "sun/misc/ObjectInputFilter$Status";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS)
#define SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::ObjectInputFilter_Status : public jni::object_base<"sun/misc/ObjectInputFilter$Status",
	java::lang::Enum>
{
public:

	static jni::ref<sun::misc::ObjectInputFilter_Status> UNDECIDED() { return get_static_field<"UNDECIDED", jni::ref<sun::misc::ObjectInputFilter_Status>>(); }
	static jni::ref<sun::misc::ObjectInputFilter_Status> ALLOWED() { return get_static_field<"ALLOWED", jni::ref<sun::misc::ObjectInputFilter_Status>>(); }
	static jni::ref<sun::misc::ObjectInputFilter_Status> REJECTED() { return get_static_field<"REJECTED", jni::ref<sun::misc::ObjectInputFilter_Status>>(); }

	static jni::ref<jni::array<sun::misc::ObjectInputFilter_Status>> values() { return call_static_method<"values", jni::ref<jni::array<sun::misc::ObjectInputFilter_Status>>>(); }
	static jni::ref<sun::misc::ObjectInputFilter_Status> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<sun::misc::ObjectInputFilter_Status>>(p1); }

protected:

	ObjectInputFilter_Status(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_STATUS
