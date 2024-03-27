// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_Utf8EntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$Utf8EntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry, scapix::java_api::jdk::internal::classfile::constantpool::Utf8Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$Utf8EntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry,
	jdk::internal::classfile::constantpool::Utf8Entry>
{
public:

	jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl> clone(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl>>(cp); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::constant::ConstantDesc> constantValue() { return call_method<"constantValue", jni::ref<java::lang::constant::ConstantDesc>>(); }
	jint length() { return call_method<"length", jint>(); }
	jchar charAt(jint index) { return call_method<"charAt", jchar>(index); }
	jni::ref<java::lang::CharSequence> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(start, end); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jboolean equalsUtf8(jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl> u) { return call_method<"equalsUtf8", jboolean>(u); }
	jboolean equalsString(jni::ref<java::lang::String> s) { return call_method<"equalsString", jboolean>(s); }
	void writeTo(jni::ref<jdk::internal::classfile::BufWriter> pool) { return call_method<"writeTo", void>(pool); }

protected:

	AbstractPoolEntry_Utf8EntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_UTF8ENTRYIMPL
