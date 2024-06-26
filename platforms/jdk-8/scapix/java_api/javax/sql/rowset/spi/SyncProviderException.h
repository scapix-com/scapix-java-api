// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::spi { class SyncProviderException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::spi::SyncProviderException>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/spi/SyncProviderException";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sql/rowset/spi/SyncResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::spi::SyncProviderException : public jni::object_base<"javax/sql/rowset/spi/SyncProviderException",
	java::sql::SQLException>
{
public:

	static jni::ref<javax::sql::rowset::spi::SyncProviderException> new_object() { return base_::new_object(); }
	static jni::ref<javax::sql::rowset::spi::SyncProviderException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::sql::rowset::spi::SyncProviderException> new_object(jni::ref<javax::sql::rowset::spi::SyncResolver> p1) { return base_::new_object(p1); }
	jni::ref<javax::sql::rowset::spi::SyncResolver> getSyncResolver() { return call_method<"getSyncResolver", jni::ref<javax::sql::rowset::spi::SyncResolver>>(); }
	void setSyncResolver(jni::ref<javax::sql::rowset::spi::SyncResolver> p1) { return call_method<"setSyncResolver", void>(p1); }

protected:

	SyncProviderException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_SYNCPROVIDEREXCEPTION
