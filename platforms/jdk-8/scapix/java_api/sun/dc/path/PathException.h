// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::dc::path { class PathException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::dc::path::PathException>
{
	static constexpr fixed_string class_name = "sun/dc/path/PathException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION)
#define SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::dc::path::PathException : public jni::object_base<"sun/dc/path/PathException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::String> BAD_PATH_endPath() { return get_static_field<"BAD_PATH_endPath", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BAD_PATH_useProxy() { return get_static_field<"BAD_PATH_useProxy", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DUMMY() { return get_static_field<"DUMMY", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::dc::path::PathException> new_object() { return base_::new_object(); }
	static jni::ref<sun::dc::path::PathException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	PathException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PATH_PATHEXCEPTION
