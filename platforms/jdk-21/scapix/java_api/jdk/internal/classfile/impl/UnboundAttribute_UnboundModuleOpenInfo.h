// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleOpenInfo.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundModuleOpenInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundModuleOpenInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundModuleOpenInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::attribute::ModuleOpenInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PackageEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundModuleOpenInfo : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundModuleOpenInfo",
	java::lang::Record,
	jdk::internal::classfile::attribute::ModuleOpenInfo>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundModuleOpenInfo> new_object(jni::ref<jdk::internal::classfile::constantpool::PackageEntry> openedPackage, jint opensFlagsMask, jni::ref<java::util::List> opensTo) { return base_::new_object(openedPackage, opensFlagsMask, opensTo); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::constantpool::PackageEntry> openedPackage() { return call_method<"openedPackage", jni::ref<jdk::internal::classfile::constantpool::PackageEntry>>(); }
	jint opensFlagsMask() { return call_method<"opensFlagsMask", jint>(); }
	jni::ref<java::util::List> opensTo() { return call_method<"opensTo", jni::ref<java::util::List>>(); }

protected:

	UnboundAttribute_UnboundModuleOpenInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEOPENINFO
