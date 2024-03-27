// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::dc::pr { class PRException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::dc::pr::PRException>
{
	static constexpr fixed_string class_name = "sun/dc/pr/PRException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION)
#define SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::dc::pr::PRException : public jni::object_base<"sun/dc/pr/PRException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::String> BAD_COORD_setOutputArea() { return get_static_field<"BAD_COORD_setOutputArea", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALPHA_ARRAY_SHORT() { return get_static_field<"ALPHA_ARRAY_SHORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DUMMY() { return get_static_field<"DUMMY", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::dc::pr::PRException> new_object() { return base_::new_object(); }
	static jni::ref<sun::dc::pr::PRException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	PRException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PR_PREXCEPTION