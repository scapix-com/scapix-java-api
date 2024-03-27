// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/PoolEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class ModuleEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::ModuleEntry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/ModuleEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::PoolEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::ModuleEntry : public jni::object_base<"java/lang/classfile/constantpool/ModuleEntry",
	java::lang::Object,
	java::lang::classfile::constantpool::PoolEntry>
{
public:

	jni::ref<java::lang::classfile::constantpool::Utf8Entry> name() { return call_method<"name", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::ModuleDesc> asSymbol() { return call_method<"asSymbol", jni::ref<java::lang::constant::ModuleDesc>>(); }

protected:

	ModuleEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_MODULEENTRY
