// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_AbstractRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MethodTypeEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_MethodTypeEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_MethodTypeEntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$MethodTypeEntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_AbstractRefEntry, scapix::java_api::jdk::internal::classfile::constantpool::MethodTypeEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_MethodTypeEntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$MethodTypeEntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry_AbstractRefEntry,
	jdk::internal::classfile::constantpool::MethodTypeEntry>
{
public:

	jni::ref<java::lang::constant::MethodTypeDesc> sym() { return get_field<"sym", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	void sym(jni::ref<java::lang::constant::MethodTypeDesc> v) { set_field<"sym", jni::ref<java::lang::constant::MethodTypeDesc>>(v); }

	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor() { return call_method<"descriptor", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry> clone(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry>>(cp); }
	jni::ref<java::lang::constant::MethodTypeDesc> asSymbol() { return call_method<"asSymbol", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	AbstractPoolEntry_MethodTypeEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_METHODTYPEENTRYIMPL
