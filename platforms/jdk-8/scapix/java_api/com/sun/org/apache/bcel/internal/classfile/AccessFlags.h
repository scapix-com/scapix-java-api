// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class AccessFlags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::AccessFlags>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/AccessFlags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::AccessFlags : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/AccessFlags",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::AccessFlags> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::AccessFlags> new_object(jint p1) { return base_::new_object(p1); }
	jint getAccessFlags() { return call_method<"getAccessFlags", jint>(); }
	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jboolean isAbstract() { return call_method<"isAbstract", jboolean>(); }
	void isAbstract(jboolean p1) { return call_method<"isAbstract", void>(p1); }
	jboolean isAnnotation() { return call_method<"isAnnotation", jboolean>(); }
	void isAnnotation(jboolean p1) { return call_method<"isAnnotation", void>(p1); }
	jboolean isEnum() { return call_method<"isEnum", jboolean>(); }
	void isEnum(jboolean p1) { return call_method<"isEnum", void>(p1); }
	jboolean isFinal() { return call_method<"isFinal", jboolean>(); }
	void isFinal(jboolean p1) { return call_method<"isFinal", void>(p1); }
	jboolean isInterface() { return call_method<"isInterface", jboolean>(); }
	void isInterface(jboolean p1) { return call_method<"isInterface", void>(p1); }
	jboolean isNative() { return call_method<"isNative", jboolean>(); }
	void isNative(jboolean p1) { return call_method<"isNative", void>(p1); }
	jboolean isPrivate() { return call_method<"isPrivate", jboolean>(); }
	void isPrivate(jboolean p1) { return call_method<"isPrivate", void>(p1); }
	jboolean isProtected() { return call_method<"isProtected", jboolean>(); }
	void isProtected(jboolean p1) { return call_method<"isProtected", void>(p1); }
	jboolean isPublic() { return call_method<"isPublic", jboolean>(); }
	void isPublic(jboolean p1) { return call_method<"isPublic", void>(p1); }
	jboolean isStatic() { return call_method<"isStatic", jboolean>(); }
	void isStatic(jboolean p1) { return call_method<"isStatic", void>(p1); }
	jboolean isStrictfp() { return call_method<"isStrictfp", jboolean>(); }
	void isStrictfp(jboolean p1) { return call_method<"isStrictfp", void>(p1); }
	jboolean isSynchronized() { return call_method<"isSynchronized", jboolean>(); }
	void isSynchronized(jboolean p1) { return call_method<"isSynchronized", void>(p1); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }
	void isSynthetic(jboolean p1) { return call_method<"isSynthetic", void>(p1); }
	jboolean isTransient() { return call_method<"isTransient", jboolean>(); }
	void isTransient(jboolean p1) { return call_method<"isTransient", void>(p1); }
	jboolean isVarArgs() { return call_method<"isVarArgs", jboolean>(); }
	void isVarArgs(jboolean p1) { return call_method<"isVarArgs", void>(p1); }
	jboolean isVolatile() { return call_method<"isVolatile", jboolean>(); }
	void isVolatile(jboolean p1) { return call_method<"isVolatile", void>(p1); }
	void setAccessFlags(jint p1) { return call_method<"setAccessFlags", void>(p1); }
	void setModifiers(jint p1) { return call_method<"setModifiers", void>(p1); }

protected:

	AccessFlags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ACCESSFLAGS
