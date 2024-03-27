// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_AbstractNamedEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractPoolEntry_ClassEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_ClassEntryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractPoolEntry$ClassEntryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractPoolEntry_AbstractNamedEntry, scapix::java_api::jdk::internal::classfile::constantpool::ClassEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractPoolEntry_ClassEntryImpl : public jni::object_base<"jdk/internal/classfile/impl/AbstractPoolEntry$ClassEntryImpl",
	jdk::internal::classfile::impl::AbstractPoolEntry_AbstractNamedEntry,
	jdk::internal::classfile::constantpool::ClassEntry>
{
public:

	jni::ref<java::lang::constant::ClassDesc> sym() { return get_field<"sym", jni::ref<java::lang::constant::ClassDesc>>(); }
	void sym(jni::ref<java::lang::constant::ClassDesc> v) { set_field<"sym", jni::ref<java::lang::constant::ClassDesc>>(v); }

	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> clone(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> cp) { return call_method<"clone", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(cp); }
	jni::ref<java::lang::constant::ClassDesc> asSymbol() { return call_method<"asSymbol", jni::ref<java::lang::constant::ClassDesc>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	AbstractPoolEntry_ClassEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTPOOLENTRY_CLASSENTRYIMPL