// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::spi { class DirContextStringPair; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::spi::DirContextStringPair>
{
	static constexpr fixed_string class_name = "javax/naming/spi/DirContextStringPair";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR)
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::naming::spi::DirContextStringPair : public jni::object_base<"javax/naming/spi/DirContextStringPair",
	java::lang::Object>
{
public:


protected:

	DirContextStringPair(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIRCONTEXTSTRINGPAIR
