// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/orbutil/fsm/NameBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Guard.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::fsm { class GuardBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::GuardBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/fsm/GuardBase";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::orbutil::fsm::NameBase, scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::Guard>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::fsm::GuardBase : public jni::object_base<"com/sun/corba/se/spi/orbutil/fsm/GuardBase",
	com::sun::corba::se::impl::orbutil::fsm::NameBase,
	com::sun::corba::se::spi::orbutil::fsm::Guard>
{
public:

	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::GuardBase> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	GuardBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_GUARDBASE
