// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_UTF8_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_UTF8_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class UTF8; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::UTF8>
{
	static constexpr fixed_string class_name = "sun/reflect/UTF8";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UTF8_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_UTF8)
#define SCAPIX_JAVA_API_SUN_REFLECT_UTF8

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::UTF8 : public jni::object_base<"sun/reflect/UTF8",
	java::lang::Object>
{
public:


protected:

	UTF8(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UTF8