// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class ModuleHashInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::ModuleHashInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/ModuleHashInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ModuleEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::ModuleHashInfo : public jni::object_base<"jdk/internal/classfile/attribute/ModuleHashInfo",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName() { return call_method<"moduleName", jni::ref<jdk::internal::classfile::constantpool::ModuleEntry>>(); }
	jni::ref<jni::array<jbyte>> hash() { return call_method<"hash", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jdk::internal::classfile::attribute::ModuleHashInfo> of(jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName, jni::ref<jni::array<jbyte>> hash) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ModuleHashInfo>>(moduleName, hash); }
	static jni::ref<jdk::internal::classfile::attribute::ModuleHashInfo> of(jni::ref<java::lang::constant::ModuleDesc> moduleDesc, jni::ref<jni::array<jbyte>> hash) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ModuleHashInfo>>(moduleDesc, hash); }

protected:

	ModuleHashInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEHASHINFO
