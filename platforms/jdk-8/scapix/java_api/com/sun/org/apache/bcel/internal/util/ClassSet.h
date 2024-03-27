// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::util { class ClassSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::util::ClassSet>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/util/ClassSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::util::ClassSet : public jni::object_base<"com/sun/org/apache/bcel/internal/util/ClassSet",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::util::ClassSet> new_object() { return base_::new_object(); }
	jboolean add(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_method<"add", jboolean>(p1); }
	jboolean empty() { return call_method<"empty", jboolean>(); }
	jni::ref<jni::array<java::lang::String>> getClassNames() { return call_method<"getClassNames", jni::ref<jni::array<java::lang::String>>>(); }
	void remove(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_method<"remove", void>(p1); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>> toArray() { return call_method<"toArray", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>>>(); }

protected:

	ClassSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSSET