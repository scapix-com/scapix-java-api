// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::spi { class SyncFactoryException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::spi::SyncFactoryException>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/spi/SyncFactoryException";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::spi::SyncFactoryException : public jni::object_base<"javax/sql/rowset/spi/SyncFactoryException",
	java::sql::SQLException>
{
public:

	static jni::ref<javax::sql::rowset::spi::SyncFactoryException> new_object() { return base_::new_object(); }
	static jni::ref<javax::sql::rowset::spi::SyncFactoryException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	SyncFactoryException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCFACTORYEXCEPTION
