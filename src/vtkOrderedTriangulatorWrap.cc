/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkOrderedTriangulatorWrap.h"
#include "vtkTetraWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkDoubleArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOrderedTriangulatorWrap::constructor;

VtkOrderedTriangulatorWrap::VtkOrderedTriangulatorWrap()
{ }

VtkOrderedTriangulatorWrap::VtkOrderedTriangulatorWrap(vtkSmartPointer<vtkOrderedTriangulator> _native)
{ native = _native; }

VtkOrderedTriangulatorWrap::~VtkOrderedTriangulatorWrap()
{ }

void VtkOrderedTriangulatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkOrderedTriangulatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkOrderedTriangulator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OrderedTriangulator").ToLocalChecked(),tpl->GetFunction());
}

void VtkOrderedTriangulatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextTetra", GetNextTetra);
	Nan::SetPrototypeMethod(tpl, "getNextTetra", GetNextTetra);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetPreSorted", GetPreSorted);
	Nan::SetPrototypeMethod(tpl, "getPreSorted", GetPreSorted);

	Nan::SetPrototypeMethod(tpl, "GetUseTemplates", GetUseTemplates);
	Nan::SetPrototypeMethod(tpl, "getUseTemplates", GetUseTemplates);

	Nan::SetPrototypeMethod(tpl, "GetUseTwoSortIds", GetUseTwoSortIds);
	Nan::SetPrototypeMethod(tpl, "getUseTwoSortIds", GetUseTwoSortIds);

	Nan::SetPrototypeMethod(tpl, "InitTetraTraversal", InitTetraTraversal);
	Nan::SetPrototypeMethod(tpl, "initTetraTraversal", InitTetraTraversal);

	Nan::SetPrototypeMethod(tpl, "InitTriangulation", InitTriangulation);
	Nan::SetPrototypeMethod(tpl, "initTriangulation", InitTriangulation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreSortedOff", PreSortedOff);
	Nan::SetPrototypeMethod(tpl, "preSortedOff", PreSortedOff);

	Nan::SetPrototypeMethod(tpl, "PreSortedOn", PreSortedOn);
	Nan::SetPrototypeMethod(tpl, "preSortedOn", PreSortedOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPreSorted", SetPreSorted);
	Nan::SetPrototypeMethod(tpl, "setPreSorted", SetPreSorted);

	Nan::SetPrototypeMethod(tpl, "SetUseTemplates", SetUseTemplates);
	Nan::SetPrototypeMethod(tpl, "setUseTemplates", SetUseTemplates);

	Nan::SetPrototypeMethod(tpl, "SetUseTwoSortIds", SetUseTwoSortIds);
	Nan::SetPrototypeMethod(tpl, "setUseTwoSortIds", SetUseTwoSortIds);

	Nan::SetPrototypeMethod(tpl, "TemplateTriangulate", TemplateTriangulate);
	Nan::SetPrototypeMethod(tpl, "templateTriangulate", TemplateTriangulate);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

	Nan::SetPrototypeMethod(tpl, "UseTemplatesOff", UseTemplatesOff);
	Nan::SetPrototypeMethod(tpl, "useTemplatesOff", UseTemplatesOff);

	Nan::SetPrototypeMethod(tpl, "UseTemplatesOn", UseTemplatesOn);
	Nan::SetPrototypeMethod(tpl, "useTemplatesOn", UseTemplatesOn);

	Nan::SetPrototypeMethod(tpl, "UseTwoSortIdsOff", UseTwoSortIdsOff);
	Nan::SetPrototypeMethod(tpl, "useTwoSortIdsOff", UseTwoSortIdsOff);

	Nan::SetPrototypeMethod(tpl, "UseTwoSortIdsOn", UseTwoSortIdsOn);
	Nan::SetPrototypeMethod(tpl, "useTwoSortIdsOn", UseTwoSortIdsOn);

}

void VtkOrderedTriangulatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOrderedTriangulator> native = vtkSmartPointer<vtkOrderedTriangulator>::New();
		VtkOrderedTriangulatorWrap* obj = new VtkOrderedTriangulatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOrderedTriangulatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOrderedTriangulatorWrap::GetNextTetra(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkTetraWrap *a1 = ObjectWrap::Unwrap<VtkTetraWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkDoubleArrayWrap *a3 = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetNextTetra(
						info[0]->Int32Value(),
						(vtkTetra *) a1->native.GetPointer(),
						(vtkDataArray *) a2->native.GetPointer(),
						(vtkDoubleArray *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrderedTriangulatorWrap::GetPreSorted(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreSorted();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrderedTriangulatorWrap::GetUseTemplates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseTemplates();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrderedTriangulatorWrap::GetUseTwoSortIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseTwoSortIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrderedTriangulatorWrap::InitTetraTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTetraTraversal();
}

void VtkOrderedTriangulatorWrap::InitTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->InitTriangulation(
									info[0]->NumberValue(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->Int32Value()
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkOrderedTriangulatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	vtkOrderedTriangulator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOrderedTriangulatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrderedTriangulatorWrap *w = new VtkOrderedTriangulatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrderedTriangulatorWrap::PreSortedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreSortedOff();
}

void VtkOrderedTriangulatorWrap::PreSortedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreSortedOn();
}

void VtkOrderedTriangulatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOrderedTriangulator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOrderedTriangulatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOrderedTriangulatorWrap *w = new VtkOrderedTriangulatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::SetPreSorted(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreSorted(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::SetUseTemplates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseTemplates(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::SetUseTwoSortIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseTwoSortIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::TemplateTriangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TemplateTriangulate(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrderedTriangulatorWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Triangulate();
}

void VtkOrderedTriangulatorWrap::UseTemplatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseTemplatesOff();
}

void VtkOrderedTriangulatorWrap::UseTemplatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseTemplatesOn();
}

void VtkOrderedTriangulatorWrap::UseTwoSortIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseTwoSortIdsOff();
}

void VtkOrderedTriangulatorWrap::UseTwoSortIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrderedTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkOrderedTriangulatorWrap>(info.Holder());
	vtkOrderedTriangulator *native = (vtkOrderedTriangulator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseTwoSortIdsOn();
}

