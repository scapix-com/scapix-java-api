// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class ReflectionFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::ReflectionFactory>
{
	static constexpr fixed_string class_name = "sun/reflect/ReflectionFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY)
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OptionalDataException.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/reflect/Constructor.h>
#include <scapix/java_api/java/lang/reflect/Executable.h>
#include <scapix/java_api/java/lang/reflect/Field.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/sun/reflect/ConstructorAccessor.h>
#include <scapix/java_api/sun/reflect/FieldAccessor.h>
#include <scapix/java_api/sun/reflect/LangReflectAccess.h>
#include <scapix/java_api/sun/reflect/MethodAccessor.h>
#include <scapix/java_api/sun/reflect/ReflectionFactory_GetReflectionFactoryAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::ReflectionFactory : public jni::object_base<"sun/reflect/ReflectionFactory",
	java::lang::Object>
{
public:

	using GetReflectionFactoryAction = ReflectionFactory_GetReflectionFactoryAction;

	static jni::ref<sun::reflect::ReflectionFactory> getReflectionFactory() { return call_static_method<"getReflectionFactory", jni::ref<sun::reflect::ReflectionFactory>>(); }
	void setLangReflectAccess(jni::ref<sun::reflect::LangReflectAccess> p1) { return call_method<"setLangReflectAccess", void>(p1); }
	jni::ref<sun::reflect::FieldAccessor> newFieldAccessor(jni::ref<java::lang::reflect::Field> p1, jboolean p2) { return call_method<"newFieldAccessor", jni::ref<sun::reflect::FieldAccessor>>(p1, p2); }
	jni::ref<sun::reflect::MethodAccessor> newMethodAccessor(jni::ref<java::lang::reflect::Method> p1) { return call_method<"newMethodAccessor", jni::ref<sun::reflect::MethodAccessor>>(p1); }
	jni::ref<sun::reflect::ConstructorAccessor> newConstructorAccessor(jni::ref<java::lang::reflect::Constructor> p1) { return call_method<"newConstructorAccessor", jni::ref<sun::reflect::ConstructorAccessor>>(p1); }
	jni::ref<java::lang::reflect::Field> newField(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Class> p3, jint p4, jint p5, jni::ref<java::lang::String> p6, jni::ref<jni::array<jbyte>> p7) { return call_method<"newField", jni::ref<java::lang::reflect::Field>>(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<java::lang::reflect::Method> newMethod(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Class>> p3, jni::ref<java::lang::Class> p4, jni::ref<jni::array<java::lang::Class>> p5, jint p6, jint p7, jni::ref<java::lang::String> p8, jni::ref<jni::array<jbyte>> p9, jni::ref<jni::array<jbyte>> p10, jni::ref<jni::array<jbyte>> p11) { return call_method<"newMethod", jni::ref<java::lang::reflect::Method>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	jni::ref<java::lang::reflect::Constructor> newConstructor(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::Class>> p2, jni::ref<jni::array<java::lang::Class>> p3, jint p4, jint p5, jni::ref<java::lang::String> p6, jni::ref<jni::array<jbyte>> p7, jni::ref<jni::array<jbyte>> p8) { return call_method<"newConstructor", jni::ref<java::lang::reflect::Constructor>>(p1, p2, p3, p4, p5, p6, p7, p8); }
	jni::ref<sun::reflect::MethodAccessor> getMethodAccessor(jni::ref<java::lang::reflect::Method> p1) { return call_method<"getMethodAccessor", jni::ref<sun::reflect::MethodAccessor>>(p1); }
	void setMethodAccessor(jni::ref<java::lang::reflect::Method> p1, jni::ref<sun::reflect::MethodAccessor> p2) { return call_method<"setMethodAccessor", void>(p1, p2); }
	jni::ref<sun::reflect::ConstructorAccessor> getConstructorAccessor(jni::ref<java::lang::reflect::Constructor> p1) { return call_method<"getConstructorAccessor", jni::ref<sun::reflect::ConstructorAccessor>>(p1); }
	void setConstructorAccessor(jni::ref<java::lang::reflect::Constructor> p1, jni::ref<sun::reflect::ConstructorAccessor> p2) { return call_method<"setConstructorAccessor", void>(p1, p2); }
	jni::ref<java::lang::reflect::Method> copyMethod(jni::ref<java::lang::reflect::Method> p1) { return call_method<"copyMethod", jni::ref<java::lang::reflect::Method>>(p1); }
	jni::ref<java::lang::reflect::Field> copyField(jni::ref<java::lang::reflect::Field> p1) { return call_method<"copyField", jni::ref<java::lang::reflect::Field>>(p1); }
	jni::ref<java::lang::reflect::Constructor> copyConstructor(jni::ref<java::lang::reflect::Constructor> p1) { return call_method<"copyConstructor", jni::ref<java::lang::reflect::Constructor>>(p1); }
	jni::ref<jni::array<jbyte>> getExecutableTypeAnnotationBytes(jni::ref<java::lang::reflect::Executable> p1) { return call_method<"getExecutableTypeAnnotationBytes", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<java::lang::reflect::Constructor> newConstructorForSerialization(jni::ref<java::lang::Class> p1, jni::ref<java::lang::reflect::Constructor> p2) { return call_method<"newConstructorForSerialization", jni::ref<java::lang::reflect::Constructor>>(p1, p2); }
	jni::ref<java::lang::reflect::Constructor> newConstructorForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"newConstructorForSerialization", jni::ref<java::lang::reflect::Constructor>>(p1); }
	jni::ref<java::lang::reflect::Constructor> newConstructorForExternalization(jni::ref<java::lang::Class> p1) { return call_method<"newConstructorForExternalization", jni::ref<java::lang::reflect::Constructor>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> readObjectForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"readObjectForSerialization", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> readObjectNoDataForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"readObjectNoDataForSerialization", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> writeObjectForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"writeObjectForSerialization", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> readResolveForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"readResolveForSerialization", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> writeReplaceForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"writeReplaceForSerialization", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jboolean hasStaticInitializerForSerialization(jni::ref<java::lang::Class> p1) { return call_method<"hasStaticInitializerForSerialization", jboolean>(p1); }
	jni::ref<java::io::OptionalDataException> newOptionalDataExceptionForSerialization(jboolean p1) { return call_method<"newOptionalDataExceptionForSerialization", jni::ref<java::io::OptionalDataException>>(p1); }

protected:

	ReflectionFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY