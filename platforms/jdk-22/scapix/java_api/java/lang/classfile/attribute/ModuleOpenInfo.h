// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class ModuleOpenInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::ModuleOpenInfo>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/ModuleOpenInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/PackageEntry.h>
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>
#include <scapix/java_api/java/lang/constant/PackageDesc.h>
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::ModuleOpenInfo : public jni::object_base<"java/lang/classfile/attribute/ModuleOpenInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::classfile::constantpool::PackageEntry> openedPackage() { return call_method<"openedPackage", jni::ref<java::lang::classfile::constantpool::PackageEntry>>(); }
	jint opensFlagsMask() { return call_method<"opensFlagsMask", jint>(); }
	jni::ref<java::util::Set> opensFlags() { return call_method<"opensFlags", jni::ref<java::util::Set>>(); }
	jboolean has(jni::ref<java::lang::reflect::AccessFlag> flag) { return call_method<"has", jboolean>(flag); }
	jni::ref<java::util::List> opensTo() { return call_method<"opensTo", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> opens, jint opensFlags, jni::ref<java::util::List> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> opens, jni::ref<java::util::Collection> opensFlags, jni::ref<java::util::List> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> opens, jint opensFlags, jni::ref<jni::array<java::lang::classfile::constantpool::ModuleEntry>> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> opens, jni::ref<java::util::Collection> opensFlags, jni::ref<jni::array<java::lang::classfile::constantpool::ModuleEntry>> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::constant::PackageDesc> opens, jint opensFlags, jni::ref<java::util::List> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::constant::PackageDesc> opens, jni::ref<java::util::Collection> opensFlags, jni::ref<java::util::List> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::constant::PackageDesc> opens, jint opensFlags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleOpenInfo> of(jni::ref<java::lang::constant::PackageDesc> opens, jni::ref<java::util::Collection> opensFlags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> opensTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleOpenInfo>>(opens, opensFlags, opensTo); }

protected:

	ModuleOpenInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEOPENINFO
