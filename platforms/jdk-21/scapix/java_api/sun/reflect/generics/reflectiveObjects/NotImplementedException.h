// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::reflectiveObjects { class NotImplementedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::reflectiveObjects::NotImplementedException>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/reflectiveObjects/NotImplementedException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::reflectiveObjects::NotImplementedException : public jni::object_base<"sun/reflect/generics/reflectiveObjects/NotImplementedException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<sun::reflect::generics::reflectiveObjects::NotImplementedException> new_object() { return base_::new_object(); }

protected:

	NotImplementedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_NOTIMPLEMENTEDEXCEPTION
