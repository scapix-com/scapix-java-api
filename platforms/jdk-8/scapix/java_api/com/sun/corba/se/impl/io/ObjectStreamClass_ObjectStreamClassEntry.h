// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class ObjectStreamClass_ObjectStreamClassEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::ObjectStreamClass_ObjectStreamClassEntry>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/ObjectStreamClass$ObjectStreamClassEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::io::ObjectStreamClass_ObjectStreamClassEntry : public jni::object_base<"com/sun/corba/se/impl/io/ObjectStreamClass$ObjectStreamClassEntry",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	ObjectStreamClass_ObjectStreamClassEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_OBJECTSTREAMCLASSENTRY