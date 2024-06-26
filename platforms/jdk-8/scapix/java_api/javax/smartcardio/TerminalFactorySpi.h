// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::smartcardio { class TerminalFactorySpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::smartcardio::TerminalFactorySpi>
{
	static constexpr fixed_string class_name = "javax/smartcardio/TerminalFactorySpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI)
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::smartcardio::TerminalFactorySpi : public jni::object_base<"javax/smartcardio/TerminalFactorySpi",
	java::lang::Object>
{
public:


protected:

	TerminalFactorySpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_TERMINALFACTORYSPI
