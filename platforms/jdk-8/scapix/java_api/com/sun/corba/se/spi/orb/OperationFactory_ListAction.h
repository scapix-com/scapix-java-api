// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/orb/OperationFactory_OperationBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class OperationFactory_ListAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::OperationFactory_ListAction>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/OperationFactory$ListAction";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::orb::OperationFactory_OperationBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::spi::orb::OperationFactory_ListAction : public jni::object_base<"com/sun/corba/se/spi/orb/OperationFactory$ListAction",
	com::sun::corba::se::spi::orb::OperationFactory_OperationBase>
{
public:

	jni::ref<java::lang::Object> operate(jni::ref<java::lang::Object> p1) { return call_method<"operate", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OperationFactory_ListAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_LISTACTION
