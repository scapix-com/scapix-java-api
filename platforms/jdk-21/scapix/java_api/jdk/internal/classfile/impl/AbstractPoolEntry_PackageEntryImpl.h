// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_AbstractNamedEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PackageEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_PackageEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_PackageEntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$PackageEntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_AbstractNamedEntry, scapix::java_api::jdk::internal::classfile::constantpool::PackageEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/PackageDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_PackageEntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$PackageEntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry_AbstractNamedEntry,
	jdk::internal::classfile::constantpool::PackageEntry>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::PackageEntry> clone(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<jdk::internal::classfile::constantpool::PackageEntry>>(cp); }
	jni::ref<java::lang::constant::PackageDesc> asSymbol() { return call_method<"asSymbol", jni::ref<java::lang::constant::PackageDesc>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	AbstractPoolEntry_PackageEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_PACKAGEENTRYIMPL
