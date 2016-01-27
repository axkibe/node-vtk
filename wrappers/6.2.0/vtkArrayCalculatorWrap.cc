/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkArrayCalculatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArrayCalculatorWrap::ptpl;

VtkArrayCalculatorWrap::VtkArrayCalculatorWrap()
{ }

VtkArrayCalculatorWrap::VtkArrayCalculatorWrap(vtkSmartPointer<vtkArrayCalculator> _native)
{ native = _native; }

VtkArrayCalculatorWrap::~VtkArrayCalculatorWrap()
{ }

void VtkArrayCalculatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArrayCalculator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArrayCalculator").ToLocalChecked(), ConstructorGetter);
}

void VtkArrayCalculatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArrayCalculatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArrayCalculatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCoordinateScalarVariable", AddCoordinateScalarVariable);
	Nan::SetPrototypeMethod(tpl, "addCoordinateScalarVariable", AddCoordinateScalarVariable);

	Nan::SetPrototypeMethod(tpl, "AddCoordinateVectorVariable", AddCoordinateVectorVariable);
	Nan::SetPrototypeMethod(tpl, "addCoordinateVectorVariable", AddCoordinateVectorVariable);

	Nan::SetPrototypeMethod(tpl, "AddScalarArrayName", AddScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "addScalarArrayName", AddScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "AddScalarVariable", AddScalarVariable);
	Nan::SetPrototypeMethod(tpl, "addScalarVariable", AddScalarVariable);

	Nan::SetPrototypeMethod(tpl, "AddVectorArrayName", AddVectorArrayName);
	Nan::SetPrototypeMethod(tpl, "addVectorArrayName", AddVectorArrayName);

	Nan::SetPrototypeMethod(tpl, "AddVectorVariable", AddVectorVariable);
	Nan::SetPrototypeMethod(tpl, "addVectorVariable", AddVectorVariable);

	Nan::SetPrototypeMethod(tpl, "CoordinateResultsOff", CoordinateResultsOff);
	Nan::SetPrototypeMethod(tpl, "coordinateResultsOff", CoordinateResultsOff);

	Nan::SetPrototypeMethod(tpl, "CoordinateResultsOn", CoordinateResultsOn);
	Nan::SetPrototypeMethod(tpl, "coordinateResultsOn", CoordinateResultsOn);

	Nan::SetPrototypeMethod(tpl, "GetAttributeMode", GetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "getAttributeMode", GetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "GetAttributeModeAsString", GetAttributeModeAsString);
	Nan::SetPrototypeMethod(tpl, "getAttributeModeAsString", GetAttributeModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateResults", GetCoordinateResults);
	Nan::SetPrototypeMethod(tpl, "getCoordinateResults", GetCoordinateResults);

	Nan::SetPrototypeMethod(tpl, "GetFunction", GetFunction);
	Nan::SetPrototypeMethod(tpl, "getFunction", GetFunction);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfScalarArrays", GetNumberOfScalarArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfScalarArrays", GetNumberOfScalarArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVectorArrays", GetNumberOfVectorArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVectorArrays", GetNumberOfVectorArrays);

	Nan::SetPrototypeMethod(tpl, "GetReplaceInvalidValues", GetReplaceInvalidValues);
	Nan::SetPrototypeMethod(tpl, "getReplaceInvalidValues", GetReplaceInvalidValues);

	Nan::SetPrototypeMethod(tpl, "GetReplacementValue", GetReplacementValue);
	Nan::SetPrototypeMethod(tpl, "getReplacementValue", GetReplacementValue);

	Nan::SetPrototypeMethod(tpl, "GetResultArrayName", GetResultArrayName);
	Nan::SetPrototypeMethod(tpl, "getResultArrayName", GetResultArrayName);

	Nan::SetPrototypeMethod(tpl, "GetResultArrayType", GetResultArrayType);
	Nan::SetPrototypeMethod(tpl, "getResultArrayType", GetResultArrayType);

	Nan::SetPrototypeMethod(tpl, "GetScalarArrayName", GetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "getScalarArrayName", GetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "GetScalarVariableName", GetScalarVariableName);
	Nan::SetPrototypeMethod(tpl, "getScalarVariableName", GetScalarVariableName);

	Nan::SetPrototypeMethod(tpl, "GetSelectedScalarComponent", GetSelectedScalarComponent);
	Nan::SetPrototypeMethod(tpl, "getSelectedScalarComponent", GetSelectedScalarComponent);

	Nan::SetPrototypeMethod(tpl, "GetVectorArrayName", GetVectorArrayName);
	Nan::SetPrototypeMethod(tpl, "getVectorArrayName", GetVectorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVectorVariableName", GetVectorVariableName);
	Nan::SetPrototypeMethod(tpl, "getVectorVariableName", GetVectorVariableName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllVariables", RemoveAllVariables);
	Nan::SetPrototypeMethod(tpl, "removeAllVariables", RemoveAllVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveCoordinateScalarVariables", RemoveCoordinateScalarVariables);
	Nan::SetPrototypeMethod(tpl, "removeCoordinateScalarVariables", RemoveCoordinateScalarVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveCoordinateVectorVariables", RemoveCoordinateVectorVariables);
	Nan::SetPrototypeMethod(tpl, "removeCoordinateVectorVariables", RemoveCoordinateVectorVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveScalarVariables", RemoveScalarVariables);
	Nan::SetPrototypeMethod(tpl, "removeScalarVariables", RemoveScalarVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveVectorVariables", RemoveVectorVariables);
	Nan::SetPrototypeMethod(tpl, "removeVectorVariables", RemoveVectorVariables);

	Nan::SetPrototypeMethod(tpl, "ReplaceInvalidValuesOff", ReplaceInvalidValuesOff);
	Nan::SetPrototypeMethod(tpl, "replaceInvalidValuesOff", ReplaceInvalidValuesOff);

	Nan::SetPrototypeMethod(tpl, "ReplaceInvalidValuesOn", ReplaceInvalidValuesOn);
	Nan::SetPrototypeMethod(tpl, "replaceInvalidValuesOn", ReplaceInvalidValuesOn);

	Nan::SetPrototypeMethod(tpl, "ResultNormalsOff", ResultNormalsOff);
	Nan::SetPrototypeMethod(tpl, "resultNormalsOff", ResultNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ResultNormalsOn", ResultNormalsOn);
	Nan::SetPrototypeMethod(tpl, "resultNormalsOn", ResultNormalsOn);

	Nan::SetPrototypeMethod(tpl, "ResultTCoordsOff", ResultTCoordsOff);
	Nan::SetPrototypeMethod(tpl, "resultTCoordsOff", ResultTCoordsOff);

	Nan::SetPrototypeMethod(tpl, "ResultTCoordsOn", ResultTCoordsOn);
	Nan::SetPrototypeMethod(tpl, "resultTCoordsOn", ResultTCoordsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAttributeMode", SetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "setAttributeMode", SetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToDefault", SetAttributeModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToDefault", SetAttributeModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUseCellData", SetAttributeModeToUseCellData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUseCellData", SetAttributeModeToUseCellData);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUseEdgeData", SetAttributeModeToUseEdgeData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUseEdgeData", SetAttributeModeToUseEdgeData);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUsePointData", SetAttributeModeToUsePointData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUsePointData", SetAttributeModeToUsePointData);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUseVertexData", SetAttributeModeToUseVertexData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUseVertexData", SetAttributeModeToUseVertexData);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateResults", SetCoordinateResults);
	Nan::SetPrototypeMethod(tpl, "setCoordinateResults", SetCoordinateResults);

	Nan::SetPrototypeMethod(tpl, "SetFunction", SetFunction);
	Nan::SetPrototypeMethod(tpl, "setFunction", SetFunction);

	Nan::SetPrototypeMethod(tpl, "SetReplaceInvalidValues", SetReplaceInvalidValues);
	Nan::SetPrototypeMethod(tpl, "setReplaceInvalidValues", SetReplaceInvalidValues);

	Nan::SetPrototypeMethod(tpl, "SetReplacementValue", SetReplacementValue);
	Nan::SetPrototypeMethod(tpl, "setReplacementValue", SetReplacementValue);

	Nan::SetPrototypeMethod(tpl, "SetResultArrayName", SetResultArrayName);
	Nan::SetPrototypeMethod(tpl, "setResultArrayName", SetResultArrayName);

	Nan::SetPrototypeMethod(tpl, "SetResultArrayType", SetResultArrayType);
	Nan::SetPrototypeMethod(tpl, "setResultArrayType", SetResultArrayType);

	ptpl.Reset( tpl );
}

void VtkArrayCalculatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArrayCalculator> native = vtkSmartPointer<vtkArrayCalculator>::New();
		VtkArrayCalculatorWrap* obj = new VtkArrayCalculatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkArrayCalculatorWrap::AddCoordinateScalarVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddCoordinateScalarVariable(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::AddCoordinateVectorVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->AddCoordinateVectorVariable(
						*a0,
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::AddScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddScalarArrayName(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::AddScalarVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddScalarVariable(
					*a0,
					*a1,
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::AddVectorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->AddVectorArrayName(
						*a0,
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::AddVectorVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->AddVectorVariable(
							*a0,
							*a1,
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							info[4]->Int32Value()
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::CoordinateResultsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinateResultsOff();
}

void VtkArrayCalculatorWrap::CoordinateResultsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinateResultsOn();
}

void VtkArrayCalculatorWrap::GetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetAttributeModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayCalculatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayCalculatorWrap::GetCoordinateResults(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateResults();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunction();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayCalculatorWrap::GetNumberOfScalarArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfScalarArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetNumberOfVectorArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVectorArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceInvalidValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplacementValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResultArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayCalculatorWrap::GetResultArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResultArrayType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayCalculatorWrap::GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::GetScalarVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarVariableName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::GetSelectedScalarComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSelectedScalarComponent(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::GetVectorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVectorArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::GetVectorVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVectorVariableName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	vtkArrayCalculator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkArrayCalculatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArrayCalculatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArrayCalculatorWrap *w = new VtkArrayCalculatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArrayCalculatorWrap::RemoveAllVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllVariables();
}

void VtkArrayCalculatorWrap::RemoveCoordinateScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveCoordinateScalarVariables();
}

void VtkArrayCalculatorWrap::RemoveCoordinateVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveCoordinateVectorVariables();
}

void VtkArrayCalculatorWrap::RemoveScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveScalarVariables();
}

void VtkArrayCalculatorWrap::RemoveVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveVectorVariables();
}

void VtkArrayCalculatorWrap::ReplaceInvalidValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInvalidValuesOff();
}

void VtkArrayCalculatorWrap::ReplaceInvalidValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInvalidValuesOn();
}

void VtkArrayCalculatorWrap::ResultNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResultNormalsOff();
}

void VtkArrayCalculatorWrap::ResultNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResultNormalsOn();
}

void VtkArrayCalculatorWrap::ResultTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResultTCoordsOff();
}

void VtkArrayCalculatorWrap::ResultTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResultTCoordsOn();
}

void VtkArrayCalculatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArrayCalculator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkArrayCalculatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArrayCalculatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArrayCalculatorWrap *w = new VtkArrayCalculatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributeMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetAttributeModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToDefault();
}

void VtkArrayCalculatorWrap::SetAttributeModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUseCellData();
}

void VtkArrayCalculatorWrap::SetAttributeModeToUseEdgeData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUseEdgeData();
}

void VtkArrayCalculatorWrap::SetAttributeModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUsePointData();
}

void VtkArrayCalculatorWrap::SetAttributeModeToUseVertexData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUseVertexData();
}

void VtkArrayCalculatorWrap::SetCoordinateResults(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoordinateResults(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunction(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceInvalidValues(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplacementValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResultArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayCalculatorWrap::SetResultArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkArrayCalculatorWrap>(info.Holder());
	vtkArrayCalculator *native = (vtkArrayCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResultArrayType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

