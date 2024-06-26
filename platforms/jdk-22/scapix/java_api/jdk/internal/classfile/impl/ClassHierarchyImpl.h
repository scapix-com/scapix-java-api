// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ClassHierarchyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ClassHierarchyImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ClassHierarchyImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassHierarchyResolver.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassHierarchyImpl_CachedClassHierarchyResolver.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassHierarchyImpl_ClassHierarchyInfoImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassHierarchyImpl_ClassLoadingClassHierarchyResolver.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassHierarchyImpl_StaticClassHierarchyResolver.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassHierarchyImpl_ResourceParsingClassHierarchyResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ClassHierarchyImpl : public jni::object_base<"jdk/internal/classfile/impl/ClassHierarchyImpl",
	java::lang::Object>
{
public:

	using CachedClassHierarchyResolver = ClassHierarchyImpl_CachedClassHierarchyResolver;
	using ClassHierarchyInfoImpl = ClassHierarchyImpl_ClassHierarchyInfoImpl;
	using ClassLoadingClassHierarchyResolver = ClassHierarchyImpl_ClassLoadingClassHierarchyResolver;
	using StaticClassHierarchyResolver = ClassHierarchyImpl_StaticClassHierarchyResolver;
	using ResourceParsingClassHierarchyResolver = ClassHierarchyImpl_ResourceParsingClassHierarchyResolver;

	static jni::ref<java::lang::classfile::ClassHierarchyResolver> DEFAULT_RESOLVER() { return get_static_field<"DEFAULT_RESOLVER", jni::ref<java::lang::classfile::ClassHierarchyResolver>>(); }

	static jni::ref<jdk::internal::classfile::impl::ClassHierarchyImpl> new_object(jni::ref<java::lang::classfile::ClassHierarchyResolver> classHierarchyResolver) { return base_::new_object(classHierarchyResolver); }
	jboolean isInterface(jni::ref<java::lang::constant::ClassDesc> classDesc) { return call_method<"isInterface", jboolean>(classDesc); }
	jni::ref<java::lang::constant::ClassDesc> commonAncestor(jni::ref<java::lang::constant::ClassDesc> symbol1, jni::ref<java::lang::constant::ClassDesc> symbol2) { return call_method<"commonAncestor", jni::ref<java::lang::constant::ClassDesc>>(symbol1, symbol2); }
	jboolean isAssignableFrom(jni::ref<java::lang::constant::ClassDesc> thisClass, jni::ref<java::lang::constant::ClassDesc> fromClass) { return call_method<"isAssignableFrom", jboolean>(thisClass, fromClass); }

protected:

	ClassHierarchyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL
