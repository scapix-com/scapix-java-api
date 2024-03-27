// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassHierarchyResolver.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ClassHierarchyImpl_StaticClassHierarchyResolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ClassHierarchyImpl_StaticClassHierarchyResolver>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ClassHierarchyImpl$StaticClassHierarchyResolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassHierarchyResolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassHierarchyResolver_ClassHierarchyInfo.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ClassHierarchyImpl_StaticClassHierarchyResolver : public jni::object_base<"jdk/internal/classfile/impl/ClassHierarchyImpl$StaticClassHierarchyResolver",
	java::lang::Object,
	java::lang::classfile::ClassHierarchyResolver>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ClassHierarchyImpl_StaticClassHierarchyResolver> new_object(jni::ref<java::util::Collection> interfaceNames, jni::ref<java::util::Map> classToSuperClass) { return base_::new_object(interfaceNames, classToSuperClass); }
	jni::ref<java::lang::classfile::ClassHierarchyResolver_ClassHierarchyInfo> getClassInfo(jni::ref<java::lang::constant::ClassDesc> classDesc) { return call_method<"getClassInfo", jni::ref<java::lang::classfile::ClassHierarchyResolver_ClassHierarchyInfo>>(classDesc); }

protected:

	ClassHierarchyImpl_StaticClassHierarchyResolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSHIERARCHYIMPL_STATICCLASSHIERARCHYRESOLVER
