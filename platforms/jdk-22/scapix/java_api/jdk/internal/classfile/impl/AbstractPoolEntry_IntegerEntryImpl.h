// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_PrimitiveEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/IntegerEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_IntegerEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_IntegerEntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$IntegerEntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_PrimitiveEntry, scapix::java_api::java::lang::classfile::constantpool::IntegerEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/BufWriter.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_IntegerEntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$IntegerEntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry_PrimitiveEntry,
	java::lang::classfile::constantpool::IntegerEntry>
{
public:

	void writeTo(jni::ref<java::lang::classfile::BufWriter> pool) { return call_method<"writeTo", void>(pool); }
	jni::ref<java::lang::classfile::constantpool::IntegerEntry> clone(jni::ref<java::lang::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<java::lang::classfile::constantpool::IntegerEntry>>(cp); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	AbstractPoolEntry_IntegerEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_INTEGERENTRYIMPL
