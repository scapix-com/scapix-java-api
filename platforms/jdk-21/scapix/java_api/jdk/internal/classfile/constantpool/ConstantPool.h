// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::constantpool { class ConstantPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::constantpool::ConstantPool>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/constantpool/ConstantPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/BootstrapMethodEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PoolEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::constantpool::ConstantPool : public jni::object_base<"jdk/internal/classfile/constantpool/ConstantPool",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::PoolEntry> entryByIndex(jint p1) { return call_method<"entryByIndex", jni::ref<jdk::internal::classfile::constantpool::PoolEntry>>(p1); }
	jint entryCount() { return call_method<"entryCount", jint>(); }
	jni::ref<jdk::internal::classfile::BootstrapMethodEntry> bootstrapMethodEntry(jint p1) { return call_method<"bootstrapMethodEntry", jni::ref<jdk::internal::classfile::BootstrapMethodEntry>>(p1); }
	jint bootstrapMethodCount() { return call_method<"bootstrapMethodCount", jint>(); }

protected:

	ConstantPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_CONSTANTPOOL
