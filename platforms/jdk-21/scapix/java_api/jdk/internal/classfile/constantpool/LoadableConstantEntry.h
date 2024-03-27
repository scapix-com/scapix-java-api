// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PoolEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::constantpool { class LoadableConstantEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::constantpool::LoadableConstantEntry>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/constantpool/LoadableConstantEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::constantpool::PoolEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/jdk/internal/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::constantpool::LoadableConstantEntry : public jni::object_base<"jdk/internal/classfile/constantpool/LoadableConstantEntry",
	java::lang::Object,
	jdk::internal::classfile::constantpool::PoolEntry>
{
public:

	jni::ref<java::lang::constant::ConstantDesc> constantValue() { return call_method<"constantValue", jni::ref<java::lang::constant::ConstantDesc>>(); }
	jni::ref<jdk::internal::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<jdk::internal::classfile::TypeKind>>(); }

protected:

	LoadableConstantEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CONSTANTPOOL_LOADABLECONSTANTENTRY