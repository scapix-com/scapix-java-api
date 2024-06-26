// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REF_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class Ref; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::Ref>
{
	static constexpr fixed_string class_name = "sun/misc/Ref";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REF)
#define SCAPIX_JAVA_API_SUN_MISC_REF

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::Ref : public jni::object_base<"sun/misc/Ref",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> reconstitute() { return call_method<"reconstitute", jni::ref<java::lang::Object>>(); }
	void flush() { return call_method<"flush", void>(); }
	void setThing(jni::ref<java::lang::Object> p1) { return call_method<"setThing", void>(p1); }
	jni::ref<java::lang::Object> check() { return call_method<"check", jni::ref<java::lang::Object>>(); }
	static jni::ref<sun::misc::Ref> new_object() { return base_::new_object(); }
	static jni::ref<sun::misc::Ref> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }

protected:

	Ref(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REF
