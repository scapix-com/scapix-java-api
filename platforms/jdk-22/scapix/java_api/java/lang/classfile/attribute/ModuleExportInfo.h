// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class ModuleExportInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::ModuleExportInfo>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/ModuleExportInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO

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

class java::lang::classfile::attribute::ModuleExportInfo : public jni::object_base<"java/lang/classfile/attribute/ModuleExportInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::classfile::constantpool::PackageEntry> exportedPackage() { return call_method<"exportedPackage", jni::ref<java::lang::classfile::constantpool::PackageEntry>>(); }
	jint exportsFlagsMask() { return call_method<"exportsFlagsMask", jint>(); }
	jni::ref<java::util::Set> exportsFlags() { return call_method<"exportsFlags", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::List> exportsTo() { return call_method<"exportsTo", jni::ref<java::util::List>>(); }
	jboolean has(jni::ref<java::lang::reflect::AccessFlag> flag) { return call_method<"has", jboolean>(flag); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> exports, jint exportFlags, jni::ref<java::util::List> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> exports, jni::ref<java::util::Collection> exportFlags, jni::ref<java::util::List> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> exports, jint exportFlags, jni::ref<jni::array<java::lang::classfile::constantpool::ModuleEntry>> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::classfile::constantpool::PackageEntry> exports, jni::ref<java::util::Collection> exportFlags, jni::ref<jni::array<java::lang::classfile::constantpool::ModuleEntry>> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::constant::PackageDesc> exports, jint exportFlags, jni::ref<java::util::List> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::constant::PackageDesc> exports, jni::ref<java::util::Collection> exportFlags, jni::ref<java::util::List> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::constant::PackageDesc> exports, jint exportFlags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }
	static jni::ref<java::lang::classfile::attribute::ModuleExportInfo> of(jni::ref<java::lang::constant::PackageDesc> exports, jni::ref<java::util::Collection> exportFlags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> exportsTo) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::ModuleExportInfo>>(exports, exportFlags, exportsTo); }

protected:

	ModuleExportInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_MODULEEXPORTINFO
