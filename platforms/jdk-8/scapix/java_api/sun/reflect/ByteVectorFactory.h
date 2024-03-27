// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class ByteVectorFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::ByteVectorFactory>
{
	static constexpr fixed_string class_name = "sun/reflect/ByteVectorFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY)
#define SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::ByteVectorFactory : public jni::object_base<"sun/reflect/ByteVectorFactory",
	java::lang::Object>
{
public:


protected:

	ByteVectorFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_BYTEVECTORFACTORY