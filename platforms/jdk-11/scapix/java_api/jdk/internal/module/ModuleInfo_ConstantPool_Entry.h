// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleInfo_ConstantPool_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleInfo_ConstantPool_Entry>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleInfo$ConstantPool$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModuleInfo_ConstantPool_Entry : public jni::object_base<"jdk/internal/module/ModuleInfo$ConstantPool$Entry",
	java::lang::Object>
{
public:


protected:

	ModuleInfo_ConstantPool_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_CONSTANTPOOL_ENTRY
