// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_AbstractRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/StringEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_StringEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_StringEntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$StringEntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_AbstractRefEntry, scapix::java_api::jdk::internal::classfile::constantpool::StringEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_Utf8EntryImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_StringEntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$StringEntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry_AbstractRefEntry,
	jdk::internal::classfile::constantpool::StringEntry>
{
public:

	jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl> utf8() { return call_method<"utf8", jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl>>(); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::constant::ConstantDesc> constantValue() { return call_method<"constantValue", jni::ref<java::lang::constant::ConstantDesc>>(); }
	jni::ref<jdk::internal::classfile::constantpool::StringEntry> clone(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<jdk::internal::classfile::constantpool::StringEntry>>(cp); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	AbstractPoolEntry_StringEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_STRINGENTRYIMPL
