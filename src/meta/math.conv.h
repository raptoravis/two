#pragma once

#include <math/Types.h>

#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#include <refl/Meta.h>
#include <refl/Enum.h>
#include <infra/StringOps.h>
#endif

namespace two
{
	export_ template <> inline void to_value(const string& str, two::Axis& val) { val = two::Axis(enu<two::Axis>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Axis& val, string& str) { str = enu<two::Axis>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::Axes& val) { val = two::Axes(enu<two::Axes>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Axes& val, string& str) { str = enu<two::Axes>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::SignedAxis& val) { val = two::SignedAxis(enu<two::SignedAxis>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::SignedAxis& val, string& str) { str = enu<two::SignedAxis>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::Side& val) { val = two::Side(enu<two::Side>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Side& val, string& str) { str = enu<two::Side>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::Clockwise& val) { val = two::Clockwise(enu<two::Clockwise>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Clockwise& val, string& str) { str = enu<two::Clockwise>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::TrackMode& val) { val = two::TrackMode(enu<two::TrackMode>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::TrackMode& val, string& str) { str = enu<two::TrackMode>().name(uint32_t(val)); };
	
	export_ template <> inline void to_value(const string& str, two::Spectrum& val) { val = two::Spectrum(enu<two::Spectrum>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Spectrum& val, string& str) { str = enu<two::Spectrum>().name(uint32_t(val)); };
	
	
}
