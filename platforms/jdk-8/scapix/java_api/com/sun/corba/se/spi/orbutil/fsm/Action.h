// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::fsm { class Action; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::Action>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/fsm/Action";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/FSM.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Input.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::fsm::Action : public jni::object_base<"com/sun/corba/se/spi/orbutil/fsm/Action",
	java::lang::Object>
{
public:

	void doIt(jni::ref<com::sun::corba::se::spi::orbutil::fsm::FSM> p1, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> p2) { return call_method<"doIt", void>(p1, p2); }

protected:

	Action(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_ACTION