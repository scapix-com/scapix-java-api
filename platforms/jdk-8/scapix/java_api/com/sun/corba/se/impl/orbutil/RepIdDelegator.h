// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/impl/orbutil/RepositoryIdStrings.h>
#include <scapix/java_api/com/sun/corba/se/impl/orbutil/RepositoryIdUtility.h>
#include <scapix/java_api/com/sun/corba/se/impl/orbutil/RepositoryIdInterface.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class RepIdDelegator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::RepIdDelegator>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/RepIdDelegator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::impl::orbutil::RepositoryIdStrings, scapix::java_api::com::sun::corba::se::impl::orbutil::RepositoryIdUtility, scapix::java_api::com::sun::corba::se::impl::orbutil::RepositoryIdInterface>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::RepIdDelegator : public jni::object_base<"com/sun/corba/se/impl/orbutil/RepIdDelegator",
	java::lang::Object,
	com::sun::corba::se::impl::orbutil::RepositoryIdStrings,
	com::sun::corba::se::impl::orbutil::RepositoryIdUtility,
	com::sun::corba::se::impl::orbutil::RepositoryIdInterface>
{
public:

	jni::ref<java::lang::String> createForAnyType(jni::ref<java::lang::Class> p1) { return call_method<"createForAnyType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> createForJavaType(jni::ref<java::io::Serializable> p1) { return call_method<"createForJavaType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> createForJavaType(jni::ref<java::lang::Class> p1) { return call_method<"createForJavaType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> createSequenceRepID(jni::ref<java::lang::Object> p1) { return call_method<"createSequenceRepID", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> createSequenceRepID(jni::ref<java::lang::Class> p1) { return call_method<"createSequenceRepID", jni::ref<java::lang::String>>(p1); }
	jni::ref<com::sun::corba::se::impl::orbutil::RepositoryIdInterface> getFromString(jni::ref<java::lang::String> p1) { return call_method<"getFromString", jni::ref<com::sun::corba::se::impl::orbutil::RepositoryIdInterface>>(p1); }
	jboolean isChunkedEncoding(jint p1) { return call_method<"isChunkedEncoding", jboolean>(p1); }
	jboolean isCodeBasePresent(jint p1) { return call_method<"isCodeBasePresent", jboolean>(p1); }
	jni::ref<java::lang::String> getClassDescValueRepId() { return call_method<"getClassDescValueRepId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getWStringValueRepId() { return call_method<"getWStringValueRepId", jni::ref<java::lang::String>>(); }
	jint getTypeInfo(jint p1) { return call_method<"getTypeInfo", jint>(p1); }
	jint getStandardRMIChunkedNoRepStrId() { return call_method<"getStandardRMIChunkedNoRepStrId", jint>(); }
	jint getCodeBaseRMIChunkedNoRepStrId() { return call_method<"getCodeBaseRMIChunkedNoRepStrId", jint>(); }
	jint getStandardRMIChunkedId() { return call_method<"getStandardRMIChunkedId", jint>(); }
	jint getCodeBaseRMIChunkedId() { return call_method<"getCodeBaseRMIChunkedId", jint>(); }
	jint getStandardRMIUnchunkedId() { return call_method<"getStandardRMIUnchunkedId", jint>(); }
	jint getCodeBaseRMIUnchunkedId() { return call_method<"getCodeBaseRMIUnchunkedId", jint>(); }
	jint getStandardRMIUnchunkedNoRepStrId() { return call_method<"getStandardRMIUnchunkedNoRepStrId", jint>(); }
	jint getCodeBaseRMIUnchunkedNoRepStrId() { return call_method<"getCodeBaseRMIUnchunkedNoRepStrId", jint>(); }
	jni::ref<java::lang::Class> getClassFromType() { return call_method<"getClassFromType", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::Class> getClassFromType(jni::ref<java::lang::String> p1) { return call_method<"getClassFromType", jni::ref<java::lang::Class>>(p1); }
	jni::ref<java::lang::Class> getClassFromType(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2) { return call_method<"getClassFromType", jni::ref<java::lang::Class>>(p1, p2); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::corba::se::impl::orbutil::RepIdDelegator> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	RepIdDelegator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_REPIDDELEGATOR
