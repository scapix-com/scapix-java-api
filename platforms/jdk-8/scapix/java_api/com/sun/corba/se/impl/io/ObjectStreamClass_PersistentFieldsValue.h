// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ClassValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class ObjectStreamClass_PersistentFieldsValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::ObjectStreamClass_PersistentFieldsValue>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/ObjectStreamClass$PersistentFieldsValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::ClassValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::io::ObjectStreamClass_PersistentFieldsValue : public jni::object_base<"com/sun/corba/se/impl/io/ObjectStreamClass$PersistentFieldsValue",
	java::lang::ClassValue>
{
public:


protected:

	ObjectStreamClass_PersistentFieldsValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASS_PERSISTENTFIELDSVALUE