// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sql/RowSetWriter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::spi { class XmlWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::spi::XmlWriter>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/spi/XmlWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sql::RowSetWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/javax/sql/rowset/WebRowSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::spi::XmlWriter : public jni::object_base<"javax/sql/rowset/spi/XmlWriter",
	java::lang::Object,
	javax::sql::RowSetWriter>
{
public:

	void writeXML(jni::ref<javax::sql::rowset::WebRowSet> p1, jni::ref<java::io::Writer> p2) { return call_method<"writeXML", void>(p1, p2); }

protected:

	XmlWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SPI_XMLWRITER
